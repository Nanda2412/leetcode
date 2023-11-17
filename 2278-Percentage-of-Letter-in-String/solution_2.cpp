class Solution {
public:
    int percentageLetter(string s, char letter) {
        array<double, 26> freq; freq.fill(0.0);

        for(char c : s) {
            ++freq[c - 'a'];
        }

        return (freq[letter - 'a']/s.size()) * 100;
    }
};
