class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        unordered_map<int, int> countMap;
        auto sorted_nums = nums;
        sort(sorted_nums.begin(), sorted_nums.end());

        for(int i = 0; i < sorted_nums.size(); ++i) {
            if(!countMap.count(sorted_nums[i])) countMap[sorted_nums[i]] = i;
        }

        vector<int> result;

        for(const auto& num : nums) {
            result.emplace_back(countMap[num]);
        }

        return result;
    }
};
