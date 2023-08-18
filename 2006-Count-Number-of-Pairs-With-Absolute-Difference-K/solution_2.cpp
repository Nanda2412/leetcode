class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int result = 0;
        unordered_map<int,int> countMap;

        const static auto& countKDiffPairs = [&](const auto& num) {
            if(countMap.count(num - k)) {
                result += countMap[num - k];
            } 
            if(countMap.count(num + k)) {
                result += countMap[num + k];
            }

             ++countMap[num];
        };

        for_each(nums.begin(), nums.end(), countKDiffPairs);

        return result;
    }
};
