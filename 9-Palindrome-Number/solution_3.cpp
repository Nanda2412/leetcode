class Solution {
    int reverse(int x) {
        int temp = x;
        long result = 0;
        while(temp) {
            result = result * 10 + temp % 10;
            temp /= 10;
        }

        return result;
    }
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;
        if(x == 0) return true;

        const int& r_x = reverse(x);
        return r_x == x;       
    }
};
