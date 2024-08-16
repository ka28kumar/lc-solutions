auto init = []() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    return 0;
}();

class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        int result = 0;
        int n = arrays.size();
        int min_ = arrays[0].front(), max_ = arrays[0].back();
        for (int ix = 1; ix < n; ++ix) {
            result = max(result, max(arrays[ix].back() - min_, max_ - arrays[ix].front()));
            min_ = min(min_, arrays[ix].front());
            max_ = max(max_, arrays[ix].back());
        }
        return result;
    }
};
