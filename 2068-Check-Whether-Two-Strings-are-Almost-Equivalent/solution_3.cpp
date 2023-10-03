class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
        array<int, 26> counter{0};

        for(const auto& c : word1) {
            ++counter[c - 'a'];
        }

        for(const auto& c : word2) {
            if(word1.find(c) != string::npos) {
                --counter[c - 'a'];
                if(!counter[c - 'a']) { 
                    replace_if(word1.begin(), word1.end(),[&](const auto& elem) {
                        return elem == c;
                    }, ' ');
                }
                continue;
            }

            ++counter[c - 'a'];
        }

        return all_of(counter.begin(), counter.end(),[](const auto& count) {
            return count <= 3;
        });
    }
};
