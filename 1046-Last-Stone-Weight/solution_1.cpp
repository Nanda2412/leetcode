class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        ranges::sort(stones);

        while(stones.size() > 1) {
            const auto first = stones.back(); stones.pop_back();
            const auto second = stones.back(); stones.pop_back();
            stones.emplace_back(first - second);
            ranges::sort(stones);
        }

        return stones.front();
    }
};
