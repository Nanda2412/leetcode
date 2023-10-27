class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        partition(s.begin(), s.end(), [](char c) {
            return c == '1';
        });

        const auto pos = s.find_last_of('1');
        swap(s[pos], s[s.size() - 1]);

        return s;
    }
};
