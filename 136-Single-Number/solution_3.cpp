class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_set<int> uniqueNums;

        for(const auto& num : nums) {
            if(uniqueNums.count(num)) {
                uniqueNums.erase(num);
            } else {
                uniqueNums.emplace(num);
            }
        }

        return *uniqueNums.begin();
    }
};
