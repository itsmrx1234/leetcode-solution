class Solution(object):
    def numBusesToDestination(self, routes, source, target):
        if source == target:
            return 0

        # Create a graph where each bus stop is a node and each bus is an edge
        stop_to_routes = defaultdict(set)
        for i, route in enumerate(routes):
            for stop in route:
                stop_to_routes[stop].add(i)

        # Initialize visited set and a queue for BFS
        visited_stops = set()
        queue = deque([(source, 0)])  # (bus stop, number of buses taken)

        while queue:
            current_stop, num_buses = queue.popleft()

            # Check all the buses passing through the current bus stop
            for route_index in stop_to_routes[current_stop]:
                for next_stop in routes[route_index]:
                    if next_stop == target:
                        return num_buses + 1

                    if next_stop not in visited_stops:
                        visited_stops.add(next_stop)
                        queue.append((next_stop, num_buses + 1))

                # Mark the current bus route as visited to avoid duplicate exploration
                routes[route_index] = []

        return -1  # No valid route found