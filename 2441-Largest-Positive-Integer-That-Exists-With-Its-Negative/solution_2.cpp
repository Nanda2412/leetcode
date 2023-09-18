class Solution {
public:
    int findMaxK(vector<int>& nums) {
        sort(nums.begin(), nums.end(), greater<>());

        const auto iter = find_if(nums.begin(), nums.end(),[](const auto& n){
            return n < 0;
        });
        const auto mid = distance(nums.begin(), iter);
        reverse(iter, nums.end());

        for(int i = 0; i < mid; ++i) {
            for(int j = mid; j < nums.size(); ++j) {
                if(nums[i] + nums[j] == 0) return nums[i];
            }
        }

        return -1;
    }
};
