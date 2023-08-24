lass Solution {
public:
    int longestAlternatingSubarray(vector<int>& nums, int threshold) {
        int result = 0;

        for(int i = 0; i < nums.size(); ++i) {
            if(!(nums[i] & 1) && nums[i] <= threshold) {
                int res = 1;
                for(int j = i; j < nums.size() - 1; ++j) {
                    if((nums[j] % 2 != nums[j + 1] % 2) && nums[j + 1] <= threshold) ++res;
                    else break;
                }
                result = max(result, res);
            }
        }

        return result;
    }
};
