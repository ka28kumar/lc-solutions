auto init = []() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    return 0;
}();

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l = 0, r = numbers.size() - 1;
        while (l < r) {
            int mid = l + (r - l) / 2;
            if (numbers[l] + numbers[r] == target)
                return {l + 1, r + 1};
            else if (numbers[l] + numbers[r] < target)
                if (numbers[mid] + numbers[r] < target)
                    l = mid + 1;
                else
                    ++l;
            else
                if (numbers[l] + numbers[mid] > target)
                    r = mid - 1;
                else
                    --r;
        }
        return {};
    }
};
