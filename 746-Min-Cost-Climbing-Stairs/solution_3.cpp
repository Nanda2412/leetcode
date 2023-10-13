class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        if(cost.size() == 2) return min(cost[0], cost[1]);
        int n = cost.size() + 1;
        int minCostSecondLastStep = 0, minCostLastStep = min(cost[0], cost[1]);

        for(int i = 3; i < n; ++i) {
            int minCostCurrStep = min(cost[i - 1] + minCostLastStep, cost[i - 2] + minCostSecondLastStep);
            minCostSecondLastStep = minCostLastStep;
            minCostLastStep = minCostCurrStep;
        }

        return minCostLastStep;
    }
};
