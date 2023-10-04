class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxCount = 0, currCount = 0;

        for(const auto& num : nums) {
            currCount = num ? currCount + 1 : 0;
            maxCount = max(maxCount, currCount);
        }

        return maxCount;
    }
};
