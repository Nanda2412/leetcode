class Solution {
public:
    string truncateSentence(string s, int k) {
        string result, word;
        stringstream ss{s};
        while(getline(ss, word, ' ') && k--) {
            result += k > 0 ? word + " " : word;
        }

        return result;
    }
};
