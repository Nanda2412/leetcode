class Solution {
public:
    bool isGood(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        if(nums.size() != nums.back() + 1) return false;
        nums.pop_back();
        return !distance(unique(nums.begin(), nums.end()), nums.end());
    }
};
