auto init = []() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    return 0;
}();

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        bool rows[9][9] = {}, cols[9][9] = {}, grids[9][9] = {};
        for (int r = 0; r < 9; ++r) {
            for (int c = 0; c < 9; ++c) {
                if (!isdigit(board[r][c]))
                    continue;
                int digit = board[r][c] - '1';
                int grid = r / 3 * 3 + c / 3;
                if (rows[r][digit] || cols[c][digit] || grids[grid][digit])
                    return false;
                rows[r][digit] = cols[c][digit] = grids[grid][digit] = true;
            }
        }
        return true;
    }
};
