class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        if(k == 0) return false;

        unordered_set<int> sliding_window;
        for(int i = 0; i < nums.size(); ++i) {
            if(sliding_window.count(nums[i])) return true;
            if(i >= k) sliding_window.erase(nums[i - k]);
            sliding_window.emplace(nums[i]);
        }

        return false;
    }
};
