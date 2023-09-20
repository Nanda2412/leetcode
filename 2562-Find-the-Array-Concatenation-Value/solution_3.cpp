class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        long long result = 0;
        size_t left = 0, right = nums.size() - 1;

        while(left < right) {
            const auto num_digits = floor(log10(nums[right])) + 1;
            const auto pow10 = pow(10, num_digits);
            result += nums[left] * pow10 + nums[right];

            ++left, --right;
        }

        if(left == right)
            result += nums[left];
        return result;
    }
};
