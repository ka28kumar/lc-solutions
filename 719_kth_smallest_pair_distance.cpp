auto init = []() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    return 0;
}();

class Solution {
private:
    int count(vector<int>& nums, int diff) {
        int l = 0, count = 0;
        for (int r = 0; r < nums.size(); ++r) {
            while (nums[r] - nums[l] > diff)
                ++l;
            count += r - l;
        }
        return count;
    }

public:
    int smallestDistancePair(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int l = 0, r = *max_element(nums.begin(), nums.end());
        while (l < r) {
            int mid = l + (r - l) / 2;
            int pairs = count(nums, mid);
            if (pairs >= k)
                r = mid;
            else
                l = mid + 1;
        }
        return r;
    }
};
