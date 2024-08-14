auto init = []() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    return 0;
}();

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int max_ = 0;
        unordered_set<int> set(nums.begin(), nums.end());
        for (auto& num : set) {
            if (set.find(num - 1) != set.end())
                continue;
            int length = 0;
            while (set.find(num + length) != set.end())
                ++length;
            max_ = max(max_, length);
        }
        return max_;
    }
};
