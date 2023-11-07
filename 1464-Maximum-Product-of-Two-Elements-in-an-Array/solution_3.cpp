class Solution {
public:
    int maxProduct(vector<int>& nums) {
        const auto max = *ranges::max_element(nums);
        const auto iter = partition(nums.begin(), nums.end(), [&](int num) {
            return num == max;
        });

        if(distance(nums.begin(), iter) > 1) return pow(max - 1, 2);

        const auto second_max = *max_element(iter, nums.end());

        return (max - 1) * (second_max - 1);
    }
};
