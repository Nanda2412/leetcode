class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int s_write_idx = 0, t_write_idx = 0;

        for(const auto& c : s) {
            if(c != '#') {
                s[s_write_idx++] = c;
            } else {
                s_write_idx = s_write_idx > 0 ? s_write_idx - 1 : s_write_idx;
            }
        }

        for(const auto& c : t) {
            if(c != '#') {
                t[t_write_idx++] = c;
            } else {
                t_write_idx = t_write_idx > 0 ? t_write_idx - 1 : t_write_idx;
            }
        }

        return s.substr(0, s_write_idx) == t.substr(0, t_write_idx);
    }
};
