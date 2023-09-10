class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        unordered_set<int> uniqueNums;

        int pairsFormed = 0;
        for(const auto& num : nums) {
            if(uniqueNums.count(num)) {
                ++pairsFormed;
                uniqueNums.erase(num);
                continue;
            }

            uniqueNums.emplace(num);
        }

        return {pairsFormed, static_cast<int>(uniqueNums.size())};
    }
};
