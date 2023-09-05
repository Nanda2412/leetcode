class Solution {
    vector<int> countingSort(vector<int>& nums) {
        unordered_map<int, int> freqMap;
        for(const auto& num : nums) {
            ++freqMap[num];
        }

        int _max = *max_element(nums.begin(), nums.end());
        int _min = *min_element(nums.begin(), nums.end());

        vector<int> result;
        for(int val = _min; val <= _max; ++val) {
            for(int i = 0; i < freqMap[val]; ++i) {
                result.emplace_back(val);
            }
        }

        return result;
    }
public:
    int countPairs(vector<int>& nums, int target) {
        int result = 0;

        const auto sorted_nums = countingSort(nums);

        auto lo = 0;
        auto hi = sorted_nums.size() - 1;
        while(lo < hi) {
            if(sorted_nums[lo] + sorted_nums[hi] >= target) {
                --hi;
                continue;
            }

            result += hi - lo;
            ++lo;
        } 

        return result;
    }
};
