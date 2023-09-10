class Solution {
public:
    int climbStairs(int n) {
        if(n == 1) return 1;
        vector<int> numSteps(n + 1, 0);
        numSteps[1] = 1, numSteps[2] = 2;
        for(int i = 3; i <= n; ++i) {
            numSteps[i] = numSteps[i - 1] + numSteps[i - 2];
        }

        return numSteps[n];
    }
};
