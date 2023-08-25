class Solution {
public:
    bool isGood(vector<int>& nums) {
        const auto _max = *max_element(nums.begin(), nums.end());
        if(nums.size() != _max + 1) return false;
        
        unordered_map<int, int> numCount;
        for(const auto& num : nums) {
            ++numCount[num];
        }

        for(const auto&[num, count] : numCount) {
            if(num != _max) {
                if(count > 1) return false;
            } else {
                if(count != 2) return false;
            }
        }

        return true;
    }
};
