auto init = []() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    return 0;
}();

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int>> result;
        for (int kx = n - 1; kx >= 0; --kx) {
            if (kx < n - 1 && nums[kx] == nums[kx + 1])
                continue;
            int ix = 0, jx = kx - 1;
            while (ix < jx) {
                if (ix > 0 && nums[ix] == nums[ix - 1]) {
                    ++ix;
                    continue;
                }
                if (nums[ix] + nums[jx] + nums[kx] == 0) {
                    result.push_back({nums[ix], nums[jx], nums[kx]});
                    ++ix;
                    --jx;
                } else if (nums[ix] + nums[jx] + nums[kx] < 0)
                    ++ix;
                else
                    --jx;
            }
        }
        return result;
    }
};
