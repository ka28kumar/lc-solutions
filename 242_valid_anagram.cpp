auto init = []() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    return 0;
}();

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size())
            return false;
        int n = s.size();
        int counts[26];
        for (int ix = 0; ix < n; ++ix) {
            ++counts[s[ix] - 'a'];
            --counts[t[ix] - 'a'];
        }
        for (auto& count : counts)
            if (count != 0)
                return false;
        return true;
    }
};
