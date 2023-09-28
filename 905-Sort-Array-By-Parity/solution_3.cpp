class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        size_t evenIdx = 0, oddIdx = nums.size() - 1;

        while(evenIdx < oddIdx) {
            if(nums[evenIdx] % 2 == 0) {
                ++evenIdx; continue;
            }
            if(nums[oddIdx] % 2 != 0) {
                --oddIdx; continue;
            }

            swap(nums[evenIdx++], nums[oddIdx--]);
        }

        return nums;
    }
};
