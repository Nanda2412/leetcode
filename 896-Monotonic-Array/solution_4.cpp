class Solution {
public:
    bool isMonotonic(vector<int>& nums) {

        function<bool(int, int, int)> helper = [&](int idx, int inc, int dec) {
            if(idx == nums.size()) return true;

            if(nums[idx] > nums[idx - 1]) {
                if(dec) return false;
                ++inc;
            }
            if(nums[idx] < nums[idx - 1]) {
                if(inc) return false;
                ++dec;
            }

            return helper(idx + 1, inc, dec);
        };

        return helper(1, 0, 0);
    }
};
