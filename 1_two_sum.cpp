auto init = []() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    return 0;
}();

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int, int> map;
        for (int ix = 0; ix < n; ++ix) {
            if (map.find(target - nums[ix]) != map.end())
                return {map[target - nums[ix]], ix};
            map[nums[ix]] = ix;
        }
        return {};
    }
};
