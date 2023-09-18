class Solution {
public:
    int findMaxK(vector<int>& nums) {
        unordered_set<int> uniqueNums(nums.begin(), nums.end());

        int result = numeric_limits<int>::min();
        for(const auto& num : uniqueNums) {
            if(uniqueNums.count(-num)) {
                result = max(result, num < 0 ? -num : num);
            }
        }

        return result == numeric_limits<int>::min() ? -1 : result;
    }
};
