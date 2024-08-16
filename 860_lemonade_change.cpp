auto init = []() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    return 0;
}();

class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int fives = 0, tens = 0;
        for (auto& bill : bills) {
            if (bill == 5)
                ++fives;
            else if (bill == 10) {
                ++tens;
                --fives;
            } else {
                if (tens > 0) {
                    --fives;
                    --tens;
                } else
                    fives -= 3;
            }
            if (fives < 0)
                return false;
        }
        return true;
    }
};
