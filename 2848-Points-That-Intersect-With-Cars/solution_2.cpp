class Solution {
public:
    int numberOfPoints(vector<vector<int>>& nums) {
        sort(nums.begin(), nums.end());

        int result = 0;
        auto currInterval = nums[0];
        for(int i = 1; i < nums.size(); ++i) {
            if(nums[i][0] <= currInterval[1] ) {
                currInterval[1] = nums[i][1] > currInterval[1] ? nums[i][1] : currInterval[1];
            } else {
                result += currInterval[1] - currInterval[0] + 1;
                currInterval = nums[i];
            }
        }

        result += currInterval[1] - currInterval[0] + 1;
        return result;
    }
};
