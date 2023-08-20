class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        const auto _min = *min_element(nums.begin(), nums.end());
        const auto _max = *max_element(nums.begin(), nums.end());

        int result = -1;
        for(const auto& num : nums) {
            if(num != _min && num != _max) result = num;
        }

        return result;
    }
};
