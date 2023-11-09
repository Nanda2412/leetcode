class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        while(stones.size() > 1) {
            ranges::sort(stones);
            const auto first = stones.back(); stones.pop_back();
            const auto second = stones.back(); stones.pop_back();
            stones.emplace_back(first - second);
        }

        return stones.front();
    }
};
