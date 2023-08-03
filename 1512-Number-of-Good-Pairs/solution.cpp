class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int, int> countMap;

        for(const auto& num : nums) {
            ++countMap[num];
        }

        int result = 0;
        for(const auto&[num, count] : countMap) {
            result += (count * (count - 1)) / 2;
        }

        return result;
    }
};
