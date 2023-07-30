class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        unordered_set<int> numSet;
        for(const auto& num : nums) {
            numSet.emplace(num);
        }

        int triplets = 0;
        for(const auto& num : nums) {
            int count = 1;
            int elem = num;
            while(numSet.count(elem + diff)) {
                elem += diff;
                ++count;
                if(count == 3) {
                    ++triplets;
                    break;
                }
            }
        }

        return triplets;
    }
};
