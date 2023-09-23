class Solution {
public:
    bool isSubsequence(string s, string t) {
        size_t start = 0;
        for(const auto& c : s) {
            const auto pos = t.find_first_of(c, start);
            if(pos == string::npos) return false;
            start = pos + 1;
        }

        return true;
        
    }
};
