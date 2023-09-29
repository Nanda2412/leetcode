class Solution {
    bool isMonotonicHelper(int idx, int inc, int dec, vector<int>& nums){
        if(idx == nums.size()) return true;

        if(nums[idx] > nums[idx - 1]) {
            if(dec) return false;
            ++inc;
        }
        if(nums[idx] < nums[idx - 1]) {
            if(inc) return false;
            ++dec;
        }

        return isMonotonicHelper(idx + 1, inc, dec, nums);
    }
public:
    bool isMonotonic(vector<int>& nums) {
        return isMonotonicHelper(1, 0, 0, nums);
    }
};
