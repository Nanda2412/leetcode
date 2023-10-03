class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
        unordered_map<char, int> freqMap;

        for(const auto& c : word1) {
            ++freqMap[c];
        }

        for(const auto& c : word2) {
            if(word1.find(c) != string::npos) {
                --freqMap[c];
                if(!freqMap[c]) { 
                    replace_if(word1.begin(), word1.end(),[&](const auto& elem) {
                        return elem == c;
                    }, ' ');
                }
                continue;
            }
    
            ++freqMap[c];
        }

        return all_of(freqMap.begin(), freqMap.end(),[](const auto& p) {
            return p.second <= 3;
        });
    }
};
