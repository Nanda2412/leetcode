class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        unordered_set<int> numSet;
        for(const auto& num : nums) {
            numSet.emplace(num);
        }

        int result = 0;
        for(const auto& num : nums) {
            int triplets = 1;
            int elem = num;
            while(numSet.count(elem + diff)) {
                elem += diff;
                ++triplets;
                if(triplets == 3) {
                    ++result;
                    break;
                }
            }
        }

        return result;
    }
};
