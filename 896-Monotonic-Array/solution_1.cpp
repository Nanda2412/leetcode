class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int increasing = 0, decreasing = 0;
        for(int i = 1; i < nums.size(); ++i) {
            if(nums[i] > nums[i - 1]) ++increasing;
            if(nums[i] < nums[i - 1]) ++decreasing;
        }

        return increasing && !decreasing || !increasing && decreasing || !increasing && !decreasing;
    }
};
