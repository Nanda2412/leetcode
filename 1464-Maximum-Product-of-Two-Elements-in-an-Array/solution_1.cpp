class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int result = INT_MIN;

        for(int i = 0; i < nums.size(); ++i) {
            for(int j = i + 1; j < nums.size(); ++j) {
                auto temp = (nums[i] - 1) * (nums[j] - 1);
                result = max(result, temp);
            }
        }

        return result;
    }
};
