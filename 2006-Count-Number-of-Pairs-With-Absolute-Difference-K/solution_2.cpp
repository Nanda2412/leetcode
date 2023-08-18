class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int result = 0;
        unordered_map<int,int> countMap;

        const static auto& countKDiffPairs = [&](const auto& num) {
            const auto& diff_1 = num - k;
            const auto& diff_2 = num + k;
            if(countMap.count(diff_1)) {
                result += countMap[diff_1];
            } 
            if(countMap.count(diff_2)) {
                result += countMap[diff_2];
            }

             ++countMap[num];
        };

        for_each(nums.begin(), nums.end(), countKDiffPairs);

        return result;
    }
};
