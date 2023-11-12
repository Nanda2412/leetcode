class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_set<char> uniqueChars(sentence.begin(), sentence.end());
        return uniqueChars.size() == 26;
    }
};
