class Solution {
    int getNumDigits(int x) {
        return 1 + static_cast<int>(floor(log10(x)));
    }
    int digitsSum(int x) {
        int sum = 0;
        while(x) {
            sum += x % 10;
            x /= 10;
        }
        return sum;
    }
public:
    int countSymmetricIntegers(int low, int high) {
        int result = 0;

        for(int i = low; i <= high; ++i) {
            int num_digits = getNumDigits(i);
            if(num_digits & 1) continue;

            int split = static_cast<int>(pow(10, num_digits/2));
            int first_half = i / split;
            int second_half = i % split;

            if(digitsSum(first_half) == digitsSum(second_half)) ++result;
        }

        return result;
    }
};
