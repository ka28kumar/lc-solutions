auto init = []() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    return 0;
}();

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> result;
        int n = nums.size();
        int left = 1, right = 1;
        for (int ix = 0; ix < n; ++ix) {
            result.push_back(left);
            left *= nums[ix];
        }
        for (int ix = n - 1; ix >= 0; --ix) {
            result[ix] *= right;
            right *= nums[ix];
        }
        return result;
    }
};
