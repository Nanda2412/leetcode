class Solution {
public:
    int singleNumber(vector<int>& nums) {
       for(const auto& num : nums) {
           if(count(nums.begin(), nums.end(), num) == 1) {
               return num;
           }
       }

       return -1;
    }
};
