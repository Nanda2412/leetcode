class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        unordered_set<int> numSet;
        int triplets = 0;
        for(const auto& num : nums) {
            if(numSet.count(num - diff) && numSet.count(num - diff * 2)) ++triplets;
            numSet.emplace(num);
        }

        return triplets;
    }
};
