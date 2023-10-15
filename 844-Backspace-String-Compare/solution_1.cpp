class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> sStack, tStack;

        for(const auto& c : s) {
            if(!sStack.empty() && c == '#') {
                sStack.pop();
                continue;
            }
            if(c != '#') sStack.emplace(c);
        }

        for(const auto& c : t) {
            if(!tStack.empty() && c == '#') {
                tStack.pop();
                continue;
            }

            if(c != '#') tStack.emplace(c);
        }

        return sStack == tStack;
    }
};
