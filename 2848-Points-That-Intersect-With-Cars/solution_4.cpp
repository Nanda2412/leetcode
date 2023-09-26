class Solution {
public:
    int numberOfPoints(vector<vector<int>>& nums) {
        sort(nums.begin(), nums.end());

        auto result = 0, rightMostTouchedPoint = numeric_limits<int>::min();
        for(const auto& num : nums) {
            if(rightMostTouchedPoint < num.back()) {
                result += num.back() - max(rightMostTouchedPoint + 1, num.front()) + 1;
                rightMostTouchedPoint = num.back();
            }
        }
        return result;
    }
};
