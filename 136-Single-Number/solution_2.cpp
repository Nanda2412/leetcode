class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> freqMap;

        for(const auto& num : nums) {
           ++freqMap[num];
        }

        const auto iter = find_if(freqMap.begin(), freqMap.end(), [](const auto& p) {
            return p.second == 1;
        });

        return iter->first;
    }
};
