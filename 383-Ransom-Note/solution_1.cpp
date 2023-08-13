class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> charCount;

        for(const auto& c : ransomNote) {
            ++charCount[c];
        }

        for(const auto& c : magazine) {
            if(charCount.count(c)) { 
                --charCount[c];
                if(!charCount[c]) charCount.erase(c);
            }
        }

        return charCount.empty();
    }
};
