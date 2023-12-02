class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        size_t write_idx = 0;
        for(const auto num : nums) {
            if(num != val) {
                nums[write_idx++] = num;
            }
        }

        return write_idx;
    }
};
