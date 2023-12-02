class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        const auto iter = partition(nums.begin(), nums.end(), [&](int num) {
            return num != val;
        });
        return distance(nums.begin(), iter);
    }
};
