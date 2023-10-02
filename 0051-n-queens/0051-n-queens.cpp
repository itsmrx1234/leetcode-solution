class Solution {
public:
    int n;
    vector<vector<string>> solveNQueens(int n) {
        this->n = n; // Store the value of 'n' in the class member.

        vector<vector<string>> chess;
        vector<int> row(n, 0);
        vector<int> left(2 * n, 0);
        vector<int> right(2 * n, 0);
        vector<string> board(n, string(n, '.')); // Initialize the chessboard with empty squares.

        // Start solving the N-Queens problem from the first row.
        solve(0, board, row, left, right, chess);

        return chess;
    }

    void solve(int col, vector<string>& board, vector<int>& row, vector<int>& left, vector<int>& right, vector<vector<string>>& chess) {
        if (col == n) {
            // If we've successfully placed all queens, add the current board configuration to the result.
            chess.push_back(board);
            return;
        }

        for (int i = 0; i < n; i++) {
            if (row[i] == 0 && left[i + col] == 0 && right[n - 1 + col - i] == 0) {
                board[i][col] = 'Q'; // Place a queen in the current cell.
                row[i] = 1;
                left[i + col] = 1;
                right[n - 1 + col - i] = 1;

                // Recursively move to the next column.
                solve(col + 1, board, row, left, right, chess);

                board[i][col] = '.'; // Backtrack: remove the queen to explore other possibilities.
                row[i] = 0;
                left[i + col] = 0;
                right[n - 1 + col - i] = 0;
            }
        }
    }
};