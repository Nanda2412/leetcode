class Solution {
public:
    int commonFactors(int a, int b) {
        int GCD = gcd(a, b);

        int result = 0;
        for(int i = 1; i <= sqrt(GCD); ++i) {
            if(GCD % i == 0) {
                result += 1 + (GCD/i != i);
            }
        }

        return result;
    }
};
