class Solution {
public:
    int findMaxK(vector<int>& nums) {
        set<int> posInts, negInts;
        for_each(nums.begin(), nums.end(),[&](const auto& n){
            if(n < 0) negInts.emplace(n);
            else posInts.emplace(n);
        });

        for(const auto& neg : negInts) {
            if(posInts.count(-neg)) return -neg;
        }

        return -1;
    }
};
