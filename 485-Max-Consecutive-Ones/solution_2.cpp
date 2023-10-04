class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxCount = 0;
        auto start = nums.begin(), end = nums.begin();
        
        while((end = find(start, nums.end(), 0)) != nums.end()) {
            maxCount = max(maxCount, static_cast<int>(distance(start, end)));
            start = end + 1;
        }

        maxCount = max(maxCount, static_cast<int>(distance(start, nums.end())));

        return maxCount;
    }
};
