class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> num_to_idx;
        vector<int> result;
        for(int i = 0; i < nums.size(); ++i) {
            if(num_to_idx.count(target - nums[i])) {
                result = vector<int>{i, num_to_idx[target - nums[i]]};
                break;
            }
            num_to_idx.emplace(nums[i], i);
        }
        
        return result;
    }
};
