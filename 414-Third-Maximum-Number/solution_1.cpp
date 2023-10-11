class Solution {
public:
    int thirdMax(vector<int>& nums) {
        ranges::sort(nums);
        nums.erase(unique(nums.begin(), nums.end()), nums.end());
        if(nums.size() < 3) return nums.back();

        return nums[nums.size() - 3];
    }
};
