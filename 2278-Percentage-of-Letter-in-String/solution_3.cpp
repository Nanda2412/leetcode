class Solution {
public:
    int percentageLetter(string s, char letter) {
        unordered_map<char, double> freq;

        for(char c : s) {
            ++freq[c];
        }

        return (freq[letter]/s.size()) * 100;
    }
};
