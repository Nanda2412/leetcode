class Solution {
public:
    string toLowerCase(string s) {
        for(auto& c : s) {
            // ASCII value - lowercase (97 to 122)
            // ASCII value - uppercase (65 to 90)
            if(c >= 65 && c <= 90) c += 32;
        }

        return s;
    }
};
