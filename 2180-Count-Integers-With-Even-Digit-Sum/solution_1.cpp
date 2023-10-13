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
        int result = 0;
        for(int i = 1; i <= num; ++i) {
            const auto sum_of_digits = sumDigits(i);
            if(sum_of_digits % 2 == 0) ++result;
        }

        return result;
    }
};
