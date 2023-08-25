class Solution {
public:
    int countBeautifulPairs(vector<int>& nums) {
        int result = 0;

        for(int i = 0; i < nums.size(); ++i) {
            int num_digits = static_cast<int>(floor(log10(nums[i]))) + 1;
            int msd = static_cast<int>(pow(10, num_digits - 1));
            for(int j = i + 1; j < nums.size(); ++j) {
                if(gcd(nums[i]/msd, nums[j]%10) == 1) ++result;
            }
        }

        return result;
    }
};
