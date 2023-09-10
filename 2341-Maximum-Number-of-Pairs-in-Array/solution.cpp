class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        unordered_map<int,int> numCount;

        for(const auto& num : nums) {
            ++numCount[num];
        }

        int pairsFormed = 0, leftOver = 0;

        for(const auto&[num, count] : numCount) {
            pairsFormed += count/2;
            leftOver += count%2;
        }

        return {pairsFormed, leftOver};
    }
};
