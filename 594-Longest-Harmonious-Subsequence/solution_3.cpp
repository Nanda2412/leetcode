class Solution {
public:
    int findLHS(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int result = INT_MIN;
        for(int i = 0; i < nums.size(); ++i) {
            const auto first = lower_bound(nums.begin(), nums.end(), nums[i]);
            if(first != nums.end()) {
                const auto second = upper_bound(nums.begin(), nums.end(), nums[i]);
                if(second != nums.end()) {
                    const auto third = upper_bound(nums.begin(), nums.end(), *second);
                    if(*second - *first == 1)
                        result = max(result, static_cast<int>(distance(first, third)));
                }
            } 
        }

        return result == INT_MIN ? 0 : result;
    }
};
