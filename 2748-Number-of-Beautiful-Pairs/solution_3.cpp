class Solution {
public:
    int countBeautifulPairs(vector<int>& nums) {
        unordered_map<int, int> firstDigitCount;
        int result = 0;

        for(const auto& num : nums) {
            int num_digits = static_cast<int>(floor(log10(num))) + 1;
            int msd = static_cast<int>(pow(10, num_digits - 1));
            
            if(!firstDigitCount.empty()) {
                for(const auto&[firstDigit, count] : firstDigitCount) {
                    if(gcd(firstDigit, num%10) == 1) result += count;
                }
            }

            ++firstDigitCount[num/msd];
        }

        return result;
    }
};
