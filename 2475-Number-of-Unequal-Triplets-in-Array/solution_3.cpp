class Solution {
public:
    int unequalTriplets(vector<int>& nums) {
        int result = 0;

        unordered_map<int, int> numsCount;
        for(const auto& num : nums) {
            ++numsCount[num];
        }

        for(int i = 0; i < nums.size() - 1; ++i) {
            for(int j = i + 1; j < nums.size(); ++j) {
                if(nums[i] != nums[j]) {
                    result += nums.size() - numsCount[nums[i]] - numsCount[nums[j]];
                }
            }
        }

        // because of duplication : (i, j, k)
        // result gets updated for (i, j), (j, k) and (i, k) so divide by 3
        return result/3;
    }
};
