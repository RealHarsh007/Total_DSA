class Solution {
public:

    bool isSafe(vector<string>& board, int row, int col, int n) {

        // Horizontal
        for (int j = 0; j < n; j++) {
            if (board[row][j] == 'Q')
                return false;
        }

        // Vertical
        for (int i = 0; i < n; i++) {
            if (board[i][col] == 'Q')
                return false;
        }

        // Diagonal - left
        for (int i = row, j = col; i >= 0 && j >= 0; i--, j--) {
            if (board[i][j] == 'Q')
                return false;
        }

        // Diagonal - right
        for (int i = row, j = col; i >= 0 && j < n; i--, j++) {
            if (board[i][j] == 'Q')
                return false;
        }

        return true;
    }

    void nQueen(vector<string>& board, int row, int n,
                vector<vector<string>>& ans) {

        // All queens placed
        if (row == n) {
            ans.push_back(board);
            return;
        }

        for (int col = 0; col < n; col++) {

            if (isSafe(board, row, col, n)) {

                board[row][col] = 'Q';

                nQueen(board, row + 1, n, ans);

                // Backtracking
                board[row][col] = '.';
            }
        }
    }

    vector<vector<string>> solveNQueens(int n) {

        vector<vector<string>> ans;

        // Create empty board
        vector<string> board(n, string(n, '.'));

        nQueen(board, 0, n, ans);

        return ans;
    }
};