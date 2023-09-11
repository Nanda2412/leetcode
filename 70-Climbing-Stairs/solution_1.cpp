class Solution {
public:
    int climbStairs(int n) {
        vector<int> numSteps(n + 1, 1);
        for(int i = 2; i <= n; ++i) {
            numSteps[i] = numSteps[i - 1] + numSteps[i - 2];
        }

        return numSteps[n];
    }
};
