class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> charCount(26, 0);
        
        for(const auto& c : s) {
            ++charCount[c - 'a'];
        }
        
        for(const auto& c : t) {
            --charCount[c - 'a'];
        }
        
        return all_of(charCount.cbegin(), charCount.cend(),[](const auto& count) {
            return count == 0;
        });
    }
};
