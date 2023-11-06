class Solution {
public:
    vector<int> asteroidCollision(vector<int>& nums) {
        vector<int> stack;
        
        for (int asteroid : nums) {
            if (stack.empty() || asteroid > 0) {
                stack.push_back(asteroid);
            } else {
                bool collision = false;
                while (!stack.empty() && stack.back() > 0) {
                    int top = stack.back();
                    stack.pop_back();
                    if (top == -asteroid) {
                        collision = true;
                        break;  // Both asteroids explode
                    } else if (top > -asteroid) {
                        collision = true;
                        stack.push_back(top);
                        break;  // The current asteroid is destroyed
                    }
                }
                if (!collision) {
                    stack.push_back(asteroid);
                }
            }
        }

        return stack;
    }
};