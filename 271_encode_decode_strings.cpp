auto init = []() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    return 0;
}();

class Solution {
public:
    /*
     * @param strs: a list of strings
     * @return: encodes a list of strings to a single string.
     */
    string encode(vector<string> &strs) {
        string encoded_ = "";
        for (auto& str : strs)
            encoded_ += to_string(str.size()) + "#" + str;
        return encoded_;
    }

    /*
     * @param str: A string
     * @return: decodes a single string to a list of strings
     */
    vector<string> decode(string &str) {
        vector<string> decoded;
        int ptr = 0;
        string buffer = "";
        int n = str.size();
        while (ptr < n) {
            if (str[ptr] == '#') {
                int length = stoi(buffer);
                decoded.push_back(str.substr(ptr + 1, length));
                buffer = "";
                ptr = ptr + length;
            } else
                buffer += str[ptr];
            ++ptr;
        }
        return decoded;
    }
};
