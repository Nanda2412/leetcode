class Solution {
    int convertToBase(int num, int base) {
        if(num == 0) return 0;
        return num % base + 10 * convertToBase(num/base, base);
    }
public:
    string convertToBase7(int num) {
        return to_string(convertToBase(num, 7));
    }
};
