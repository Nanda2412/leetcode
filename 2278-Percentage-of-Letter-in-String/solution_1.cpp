class Solution {
public:
    int percentageLetter(string s, char letter) {
        double count_letter = ranges::count(s, letter);
        return (count_letter/s.size()) * 100;
    }
};
