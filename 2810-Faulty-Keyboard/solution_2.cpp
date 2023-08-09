class Solution {
public:
    string finalString(string s) {
        stack<char> s1, s2;

        for(const auto& c : s) {
            if(c != 'i') {
                s1.empty() ? s2.emplace(c) : s1.emplace(c);
            } else {
                if(!s1.empty()) {
                    while(!s1.empty()) {
                        s2.emplace(s1.top());
                        s1.pop();
                    }
                } else {
                    while(!s2.empty()) {
                        s1.emplace(s2.top());
                        s2.pop();
                    }
                }
            }
        }

        string result;
        while(!s1.empty()) {
            result += s1.top();
            s1.pop();
        }

         while(!s2.empty()) {
            result += s2.top();
            s2.pop();
        }

        reverse(result.begin(), result.end());
        return result;
    }
};
