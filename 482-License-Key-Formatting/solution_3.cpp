class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        s.erase(remove(s.begin(), s.end(), '-'), s.end());
        ranges::for_each(s, [](auto& c) {
            c = isalpha(c) && islower(c) ? toupper(c) : c;
        });
        reverse(s.begin(), s.end());

        string result;
        for(int i = 0; i < s.size(); i += k) {
            result += s.substr(i, k);
            result += '-';
        }
        if(!result.empty()) result.pop_back();
        reverse(result.begin(), result.end());

        return result;
    }
};
