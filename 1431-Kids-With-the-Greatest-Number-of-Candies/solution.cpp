class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        auto max = *max_element(candies.cbegin(), candies.cend());
        vector<bool> result;
        for_each(candies.cbegin(), candies.cend(), [&](const auto& candy) {
            result.emplace_back(candy >= max - extraCandies);
        });

        return result;
    }
};
