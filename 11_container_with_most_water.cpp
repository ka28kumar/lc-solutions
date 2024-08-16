auto init = []() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    return 0;
}();

class Solution {
public:
    int maxArea(vector<int>& height) {
        int area = 0;
        int l = 0, r = height.size() - 1;
        while (l < r) {
            area = max(area, (r - l) * min(height[l], height[r]));
            if (height[l] <= height[r])
                ++l;
            else
                --r;
        }
        return area;
    }
};
