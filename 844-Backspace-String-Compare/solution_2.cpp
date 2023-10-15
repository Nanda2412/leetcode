class Solution {
public:
    bool backspaceCompare(string s, string t) {
        vector<char> sVector, tVector;

        for(const auto& c : s) {
            if(!sVector.empty() && c == '#') {
                sVector.pop_back();
                continue;
            }
            if(c != '#') sVector.emplace_back(c);
        }

        for(const auto& c : t) {
            if(!tVector.empty() && c == '#') {
                tVector.pop_back();
                continue;
            }

            if(c != '#') tVector.emplace_back(c);
        }

        return sVector == tVector;
    }
};
