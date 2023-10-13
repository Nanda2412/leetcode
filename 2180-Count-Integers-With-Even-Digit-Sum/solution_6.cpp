class Solution {
    int sumDigits(int n) {
        int temp = 0;
        while(n) {
            temp += n % 10;
            n /= 10;
        }

        return temp;
    }
public:
    int countEven(int num) {
        int result = (num + 1) / 2 - 1;

        if(num % 2 == 0 && sumDigits(num) % 2 == 0) ++result;

        return result;
    }
};
