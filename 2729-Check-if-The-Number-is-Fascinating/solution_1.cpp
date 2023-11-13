class Solution {
    bool verifyResult(long long n) {
        unordered_set<int> uniqueNums;
        while(n) {
            uniqueNums.emplace(n % 10);
            n /= 10;
        }

        return !uniqueNums.count(0) && uniqueNums.size() == 9;
    }
public:
    bool isFascinating(int n) {
        
        const auto two_n = 2 * n;
        const auto three_n = 3 * n;

        int two_n_digits = static_cast<int>(floor(log10(two_n))) + 1;
        int three_n_digits = static_cast<int>(floor(log10(three_n))) + 1;

        long long result = (static_cast<int>(n * pow( 10, two_n_digits))) + two_n;
        result *= static_cast<int>(pow(10, three_n_digits));
        result += three_n;

        if(static_cast<int>(floor(log10(result))) + 1 > 9 ) return false;
        return verifyResult(result);
    }
};
