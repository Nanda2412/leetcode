class Solution {
public:
    int unequalTriplets(vector<int>& nums) {
        int result = 0;

        for(int i = 0; i < nums.size() - 2; ++i) {
            for(int j = i + 1; j < nums.size() - 1; ++j) {
                if(nums[i] != nums[j]) {
                    const auto count = count_if(nums.begin() + j + 1, nums.end(), [&](const auto& n) {
                        return n != nums[i] && n != nums[j];
                    });

                    result += count;
                }
            }
        }

        return result;
    }
};
