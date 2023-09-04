class Solution {
    int getNumDigits(int x) {
        return 1 + static_cast<int>(floor(log10(x)));
    }
    int getNthDigitFromRight(int x, int n) {
        return floor((x % static_cast<int>(pow(10, n + 1)))/ static_cast<int>(pow(10, n)));
    }
    bool isSymmetric(int x) {
        int num_digits = getNumDigits(x);
        if(num_digits & 1) return false;

        int lo = 0;
        int hi = num_digits - 1;
        int diff = 0;

        while(lo < hi) {
            diff += getNthDigitFromRight(x, lo++) - getNthDigitFromRight(x, hi--);
        }

        return diff == 0;
    }
public:
    int countSymmetricIntegers(int low, int high) {
        int result = 0;

        for(int i = low; i <= high; ++i) {
            if(isSymmetric(i)) ++result;
        }

        return result;
    }
};
