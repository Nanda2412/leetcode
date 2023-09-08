class Solution {
public:
    string largestOddNumber(string num) {
        reverse(num.begin(), num.end());
        num.erase(num.begin(), find_if(num.begin(), num.end(), [](const int& n) {
            return n & 1;
        }));

        reverse(num.begin(), num.end());
        return num;
    }
};
