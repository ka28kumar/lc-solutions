auto init = []() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    return 0;
}();

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> seen;
        for (auto& num : nums) {
            if (seen.find(num) != seen.end())
                return true;
            seen.insert(num);
        }
        return false;
    }
};
