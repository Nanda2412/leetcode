class Solution {
public:
    int findLHS(vector<int>& nums) {
        map<int,int> sortedNums;

        for(const auto& num : nums) {
            ++sortedNums[num];
        }

        int prevNum = sortedNums.begin()->first;
        int result = INT_MIN;
        for(const auto&[num, count] : sortedNums) {
            if(num - prevNum == 1) {
                result = max(result, sortedNums[num] + sortedNums[prevNum]);
            }

            prevNum = num;
        }

        return result == INT_MIN ? 0 : result;
    }
};
