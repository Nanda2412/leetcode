class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        if(cost.size() == 2) return min(cost[0], cost[1]);
        vector<int> dp(cost.size() + 1, 0);
        dp[2] = min(cost[0], cost[1]);

        for(int i = 3; i < dp.size(); ++i) {
            dp[i] = min(cost[i - 1] + dp[i - 1], cost[i - 2] + dp[i - 2]);
        }

        return dp.back();
    }
};
