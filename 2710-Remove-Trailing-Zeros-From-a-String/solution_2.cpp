class Solution {
public:
    string removeTrailingZeros(string num) {
        auto idx = num.find_last_not_of('0') + 1;
        num.erase(num.begin() + idx, num.end());
        return num;
    }
};
