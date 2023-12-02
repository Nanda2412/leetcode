class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        size_t write_idx = 0;
        for(size_t i = 0; i < nums.size(); ++i) {
            if(nums[i] != val) {
                if(write_idx != i) nums[write_idx] = nums[i];
                ++write_idx;
            }
        }

        return write_idx;
    }
};
