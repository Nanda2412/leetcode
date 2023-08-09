class Solution {
public:
    string finalString(string s) {
        string result;
        for(const auto& c : s) {
            if(c != 'i') result += c;
            else reverse(result.begin(), result.end());
        }

        return result;
    }
};
