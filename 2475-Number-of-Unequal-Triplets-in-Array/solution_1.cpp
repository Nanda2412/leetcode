class Solution {
public:
    int unequalTriplets(vector<int>& nums) {
        int result = 0;
        for(int i = 0; i < nums.size() - 2; ++i) {
            const auto first = nums[i];
            for(int j = i + 1; j < nums.size() - 1; ++j) {
                const auto second = nums[j];
                if(first != second) {
                    for(int k = j + 1; k < nums.size(); ++k) {
                        const auto third = nums[k];
                        if(first != third && second != third) ++result;
                    }
                }
            }
        }

        return result;
    }
};
