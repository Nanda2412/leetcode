class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        for_each(nums.begin(), nums.end(), [currSum = 0] (auto& n) mutable {
            currSum += n;
            n = currSum;
        });

        return nums;
    }
};
