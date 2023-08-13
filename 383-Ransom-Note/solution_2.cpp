class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> count(26, 0);

        for(const auto& c : ransomNote) {
            ++count[c - 'a'];
        }

        for(const auto& c : magazine) {
            if(count[c - 'a']) --count[c - 'a'];
        }

        return all_of(count.begin(), count.end(), [](const auto& val){
            return !val;
        });
    }
};
