auto init = []() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    return 0;
}();

class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int result = 0;
        int l = 0, r = n - 1;
        int lmax = height[l], rmax = height[r];
        while (l < r) {
            if (lmax <= rmax) {
                ++l;
                lmax = max(lmax, height[l]);
                result += lmax - height[l];
            } else {
                --r;
                rmax = max(rmax, height[r]);
                result += rmax - height[r];
            }
        }
        return result;
    }
};
