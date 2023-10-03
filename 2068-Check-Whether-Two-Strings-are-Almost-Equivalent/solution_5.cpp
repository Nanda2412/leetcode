class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
        array<int, 26> counter{0};

        for(const auto& c : word1) {
            ++counter[c - 'a'];
        }

        for(const auto& c : word2) {
            --counter[c - 'a'];
        }

        return all_of(counter.begin(), counter.end(),[](const auto& count) {
            return abs(count) <= 3;
        });
    }
};
