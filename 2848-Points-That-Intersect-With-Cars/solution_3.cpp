class Solution {
    int pointsTouched(int start, int end) {
        if(start > end) return 0;

        return end - start + 1;
    }
public:
    int numberOfPoints(vector<vector<int>>& nums) {
        sort(nums.begin(), nums.end());

        auto result = 0, rightMostTouchedPoint = numeric_limits<int>::min();
        for(int i = 0; i < nums.size(); ++i) {
            const auto start = nums[i].front();
            const auto end = nums[i].back();
            const auto startWithNoDoubleCounting = max(start, rightMostTouchedPoint + 1);
            result += pointsTouched(startWithNoDoubleCounting, end);
            rightMostTouchedPoint = max(rightMostTouchedPoint, end);
        }
        return result;
    }
};
