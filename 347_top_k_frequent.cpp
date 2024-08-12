auto init = []() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    return 0;
}();

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> counts;
        for (auto& num : nums)
            counts[num] += 1;
        unordered_map<int, vector<int>> map;
        for (auto& pair : counts)
            map[pair.second].push_back(pair.first);
        vector<int> result;
        for (int count = nums.size(); count >= 0; --count)
            for (auto& num : map[count]) {
                result.push_back(num);
                if (result.size() == k)
                    return result;
            }
        return result;
    }
};
