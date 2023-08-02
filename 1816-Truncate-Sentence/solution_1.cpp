class Solution {
public:
    string truncateSentence(string s, int k) {
        for(int i = 0, count = 0; i < s.size(); ++i) {
            if(s[i] == ' ') ++count;
            if(count == k) return s.substr(0, i);
        }

        return s;
    }
};
