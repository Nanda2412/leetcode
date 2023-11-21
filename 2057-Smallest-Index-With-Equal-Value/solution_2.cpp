class Solution {
    int smallestEqualHelper(int idx, vector<int>& nums) {
        if(idx >= nums.size()) return -1;

        if(idx % 10 == nums[idx]) return idx;

        return smallestEqualHelper(idx + 1, nums);
    }
public:
    int smallestEqual(vector<int>& nums) {
        return smallestEqualHelper(0, nums);
    }
};
