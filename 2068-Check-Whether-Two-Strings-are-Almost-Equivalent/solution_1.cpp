class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
        unordered_set<char> uniqueChars(word1.begin(), word1.end());
        unordered_map<char, int> freqMap;

        for(const auto& c : word1) {
            ++freqMap[c];
        }

        for(const auto& c : word2) {
            if(uniqueChars.count(c)) {
                --freqMap[c];
                if(!freqMap[c]) uniqueChars.erase(c);
                continue;
            }
    
            ++freqMap[c];
        }

        return all_of(freqMap.begin(), freqMap.end(),[](const auto& p) {
            return p.second <= 3;
        });
    }
};
