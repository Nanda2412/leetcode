class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        while(k--) {
            ranges::sort(gifts);
            const auto top = gifts.back(); gifts.pop_back();
            gifts.emplace_back(floor(sqrt(top)));
        }

        return accumulate(gifts.begin(), gifts.end(), 0.0);
    }
};
