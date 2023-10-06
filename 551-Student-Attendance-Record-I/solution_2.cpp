class Solution {
public:
    bool checkRecord(string s) {
        int count_A = 0, count_L = 0;

        for(int i = 0; i < s.size(); ++i) {
            count_A += s[i] == 'A';
            if(count_A >= 2) return false;

            count_L += s[i] == 'L';
            if(count_L >= 3 && s.substr(i - 2, 3) == "LLL") return false;
        }

        return true;
    }
};
