class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        int write_idx = s.size() - 1;

        for(int i = write_idx; i >= 0 ; --i) {
            if(isalnum(s[i])) {
                if(isalpha(s[i]) && islower(s[i])) s[write_idx--] = toupper(s[i]);
                else s[write_idx--] = s[i];
            }
        }

        s.erase(s.begin(), s.begin() + write_idx + 1);
        for(int i = s.size() - k; i > 0; i -= k) {
            s.insert(i, 1, '-');
        }

        return s;
    }
};
