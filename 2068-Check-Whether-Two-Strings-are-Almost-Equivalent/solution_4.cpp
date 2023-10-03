class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
        unordered_map<char, int> freqMap;

        for(const auto& c : word1) {
            ++freqMap[c];
        }

        for(const auto& c : word2) {
            --freqMap[c];
        }

        return all_of(freqMap.begin(), freqMap.end(),[](const auto& p) {
            return abs(p.second) <= 3;
        });
    }
};
