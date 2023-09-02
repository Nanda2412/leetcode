class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;
        if(x == 0) return true;

        const int num_digits = static_cast<int>(floor(log10(x))) + 1;
        int msd = static_cast<int>(pow(10, num_digits - 1));

        for(int i = 0; i < num_digits/2; ++i) {
            if(x / msd != x % 10) return false;

            x %= msd;
            x /= 10;
            msd /= 100;
        }

        return true;
    }
};
