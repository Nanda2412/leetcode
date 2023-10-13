class Solution {
    unordered_map<int, int> _cache;
    int minCostClimbingStairsHelper(vector<int>& cost, int n) {
        if(n < 2) return 0;
        if(n == 2) return min(cost[0], cost[1]);

        if(!_cache.count(n)) {
            _cache[n] = min(cost[n - 1] + minCostClimbingStairsHelper(cost, n - 1), cost[n - 2] + minCostClimbingStairsHelper(cost, n - 2));
        }

        return _cache[n];
    }
public:
    int minCostClimbingStairs(vector<int>& cost) {
        return minCostClimbingStairsHelper(cost, cost.size());
    }
};
