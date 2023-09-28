class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        size_t evenIdx = 0;

        for(auto& num : nums) {
            if(num % 2 == 0) {
                swap(nums[evenIdx++], num);
            }
        }
        
        return nums;
    }
};
