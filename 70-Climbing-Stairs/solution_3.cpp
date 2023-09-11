class Solution {
public:
    int climbStairs(int n) {
        int totalSteps = 0, count_1 = 0, count_2 = 1;
        for(int i = 1; i <= n; ++i) {
            totalSteps = count_1 + count_2;
            count_1 = count_2, count_2 = totalSteps;
        }

        return totalSteps;
    }
};
