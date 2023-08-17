class Solution {
public:
    int majorityElement(vector<int>& nums) {
        if(nums.size() == 1) return nums.front();

        sort(nums.begin(), nums.end());

        int count = 1;
        for(int i = 0; i < nums.size() - 1; ++i) {
            nums[i] == nums[i + 1] ? ++count : count = 1;

            if(count > nums.size()/2) {
                return nums[i];
            }
        }

        // it will never reach here
        return -1;
    }
};
