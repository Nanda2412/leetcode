class Solution {
    int convertToBase(int num, int base) {
        int result = 0;
        int mul = 1;
        while(num) {
            result += num % base * mul;
            num /= base;
            mul *= 10;
        }

        return result;
    }
public:
    string convertToBase7(int num) {
        return to_string(convertToBase(num, 7));
    }
};
