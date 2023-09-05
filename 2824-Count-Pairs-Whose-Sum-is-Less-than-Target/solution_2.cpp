class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int result = 0;
        size_t i = 0, j = nums.size() - 1;
        while(i < j) {
            if(nums[i] + nums[j] >= target) {
                --j;
            } else{
                result += j - i;
                ++i;
            }
        }

        return result;
    }
};
