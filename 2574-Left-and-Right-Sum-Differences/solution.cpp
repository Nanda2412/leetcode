class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> result;
        auto left = 0, right = accumulate(nums.begin(), nums.end(), 0);

        for_each(nums.begin(), nums.end(), [&](const auto& n) {
            right -= n;
            result.emplace_back(abs(left - right));
            left += n;
        });

        return result;
    }
};
