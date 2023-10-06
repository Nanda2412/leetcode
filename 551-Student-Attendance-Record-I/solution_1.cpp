class Solution {
public:
    bool checkRecord(string s) {
        const auto absentCount = count(s.begin(), s.end(), 'A');
        const auto lateForThreeConsecutiveDays = s.find("LLL") != string::npos;

        return absentCount < 2 && !lateForThreeConsecutiveDays;
    }
};
