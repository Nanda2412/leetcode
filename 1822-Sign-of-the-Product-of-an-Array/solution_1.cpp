class Solution {
public:
    int arraySign(vector<int>& nums) {
        if(ranges::any_of(nums, [](int num){
            return !num;
        })) return 0;

        const auto neg_cnt = ranges::count_if(nums, [](int num) {
            return num < 0;
        });

        if(neg_cnt & 1) return -1;

        return 1;
    }
};
