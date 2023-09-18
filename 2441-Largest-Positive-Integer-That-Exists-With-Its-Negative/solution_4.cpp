class Solution {
public:
    int findMaxK(vector<int>& nums) {
        sort(nums.begin(), nums.end(), greater<>());

        int left = 0, right = nums.size() - 1;
        while(left < right) {
            if(nums[left] == -nums[right]) return nums[left];

            if(nums[left] > -nums[right]) ++left;
            else --right;
        }

        return -1;
    }
};
