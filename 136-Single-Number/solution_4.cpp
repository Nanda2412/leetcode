class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int result = 0, prevNum = INT_MIN;

        for(const auto& num : nums) {
            result += prevNum != num ? num : -num;
            prevNum = num;
        }

        return result;
    }
};
