class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        const auto is_even = [](const auto& n) {
            return n % 2 == 0;
        };
        partition(nums.begin(), nums.end(), is_even);
        return nums;
    }
};
