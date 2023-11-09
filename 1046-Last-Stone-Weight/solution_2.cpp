class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq(stones.begin(), stones.end());

        while(pq.size() > 1) {
            const auto first = pq.top(); pq.pop();
            const auto second = pq.top(); pq.pop();

            pq.emplace(first - second);
        }

        return pq.top();
    }
};
