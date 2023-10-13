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
        if(num < 10) return num / 2;
        
        int result = (num/10 * 5) - 1;
        int start = (num / 10) * 10;

        for(int i = start; i <= num; ++i) {
            if(sumDigits(i) % 2 == 0) ++result;
        }

        return result;
    }
};
