auto init = []() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    return 0;
}();

class Solution {
private:
    vector<vector<int>> result;
    vector<int>candidate;

    void backtrack(vector<int>& candidates, int target, int ix, int n) {
        if (target == 0) {
            result.push_back(candidate);
            return;
        }
        if (ix == n || target < 0)
            return;
        candidate.push_back(candidates[ix]);
        backtrack(candidates, target - candidates[ix], ix + 1, n);
        candidate.pop_back();
        while (ix + 1 < n && candidates[ix + 1] == candidates[ix])
            ++ix;
        backtrack(candidates, target, ix + 1, n);
    }

public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        backtrack(candidates, target, 0, candidates.size());
        return result;
    }
};
