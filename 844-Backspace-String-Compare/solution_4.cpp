class Solution {
    struct StringBuilder {
        string& _str;
        StringBuilder(string& str) : _str(str){}

        void operator()(const auto& c) {
            if(!_str.empty() && c == '#') {
                _str.pop_back();
            } else if(c != '#') {
                _str += c;
            }
        }
    };
public:
    bool backspaceCompare(string s, string t) {
        string _s, _t;
        ranges::for_each(s, StringBuilder(_s));
        ranges::for_each(t, StringBuilder(_t));

        return _s == _t;
    }
};
