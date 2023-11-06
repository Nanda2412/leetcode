class Solution {
    int revNum(int num) {
        int rev_num = 0;
        while(num) {
            rev_num = rev_num * 10 + num % 10;
            num /= 10;
        }
        return rev_num;
    }
public:
    bool isSameAfterReversals(int num) {
        return num == revNum(revNum(num));
    }
};
