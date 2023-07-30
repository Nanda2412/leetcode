class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int elementSum = accumulate(nums.begin(), nums.end(), 0);
        int digitSum = 0;
        for_each(nums.begin(), nums.end(), [&](auto num) {
            while(num) {
                digitSum += num % 10;
                num /= 10;
            }
        });

        return abs(elementSum - digitSum);
    }
};
