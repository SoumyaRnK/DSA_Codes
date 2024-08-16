#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool issafe(int r, int c, vector<vector<int>>& board, int n) {
        int row = r, col = c;
        while (col >= 0) {
            if (board[row][col] == 1) {
                return false;
            }
            col--;
        }
        row = r; col = c;
        while (row >= 0 && col >= 0) {
            if (board[row][col] == 1) {
                return false;
            }
            row--;
            col--;
        }
        row = r; col = c;
        while (row < n && col >= 0) {
            if (board[row][col] == 1) {
                return false;
            }
            row++;
            col--;
        }
        return true;
    }

    void fill(vector<vector<int>>& board, vector<vector<int>>& ans, int n) {
        vector<int> v;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (board[i][j] == 1) {
                    v.push_back(j + 1);
                }
            }
        }
        ans.push_back(v);
    }

    void solve(int col, vector<vector<int>>& board, vector<vector<int>>& ans, int n) {
        if (col >= n) {
            fill(board, ans, n);
            return;
        }
        for (int row = 0; row < n; row++) {
            if (issafe(row, col, board, n)) {
                board[row][col] = 1;
                solve(col + 1, board, ans, n);
                board[row][col] = 0;
            }
        }
    }

    vector<vector<int>> nQueen(int n) {
        vector<vector<int>> ans;
        vector<vector<int>> board(n, vector<int>(n, 0));
        solve(0, board, ans, n);
        return ans;
    }
};

int main() {
    Solution sol;
    int n = 8; // Example, you can change this value to test different cases
    vector<vector<int>> results = sol.nQueen(n);
    for (const auto& solution : results) {
        for (int pos : solution) {
            cout << pos << " ";
        }
        cout << endl;
    }
    return 0;
}
