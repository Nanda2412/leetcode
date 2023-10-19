class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int,int> freqMap;

        for(const auto& num : nums) {
            ++freqMap[num];
        }

        int result = INT_MIN;
        for(const auto&[num, count] : freqMap) {
            if(freqMap.count(num + 1)) {
                result = max(result, freqMap[num] + freqMap[num + 1]);
            }
            if(freqMap.count(num - 1)) {
                result = max(result, freqMap[num] + freqMap[num - 1]);
            }
        }

        return result == INT_MIN ? 0 : result;
    }
};
