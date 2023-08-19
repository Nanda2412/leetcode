class Solution {
    int maxDigit(int num) {
        int result = numeric_limits<int>::min();
        while(num) {
            int lsd = num % 10;
            result = max(result, lsd);
            num /= 10;
        }

        return result;
    }
public:
    int maxSum(vector<int>& nums) {
        vector<int> result;
        for(int i = 0; i < nums.size(); ++i) {
            for(int j = i +1; j < nums.size(); ++j) {
                const auto& i_max_digit = maxDigit(nums[i]);
                const auto& j_max_digit = maxDigit(nums[j]);

                if(i_max_digit == j_max_digit) {
                    result.emplace_back(nums[i] + nums[j]);
                }
            }
        }

        return result.empty() ? -1 : *max_element(result.begin(), result.end());
    }
};
