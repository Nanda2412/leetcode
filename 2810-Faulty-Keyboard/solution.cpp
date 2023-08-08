class Solution {
public:
    string finalString(string s) {
        string result;
        for(const auto& c : s) {
            result += c;
            if(c == 'i') {
                result.erase(result.size() - 1, 1);
                reverse(result.begin(), result.end());
            }
        }

        return result;
    }
};
