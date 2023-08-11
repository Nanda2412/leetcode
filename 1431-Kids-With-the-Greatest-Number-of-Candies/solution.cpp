class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        auto max = *max_element(candies.cbegin(), candies.cend());
        vector<bool> result;
        for_each(candies.cbegin(), candies.cend(), [&](const auto& candy) {
            candy + extraCandies >= max ? result.emplace_back(true) : result.emplace_back(false);
        });

        return result;
    }
};
