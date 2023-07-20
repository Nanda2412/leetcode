class Solution {
public:
    int countDigits(int num) {

        const int num_digits = static_cast<int>(floor(log10(num))) + 1;
        int msd_mask = static_cast<int>(pow(10, num_digits - 1));

        int count = 0, temp = num;
        for(int i  = 0; i < (num_digits/2); ++i) {
            if( num % (temp / msd_mask) == 0 ) ++count;
            if( num % (temp % 10) == 0 ) ++count;

            temp %= msd_mask; // drop most significant digit
            temp /= 10; // drop least significant digit

            msd_mask /= 100; // update the mask, dropped two digits, so divide by 100
        }

        // for odd number of digits, temp will be the digit at the middle
        if(num_digits & 1) {
            if(num % temp == 0) ++count;
        }

        return count;
    }
};
