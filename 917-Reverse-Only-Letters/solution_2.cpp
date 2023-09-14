class Solution {
public:
    string reverseOnlyLetters(string s) {
        stack<char> charStack;
        
        for(const auto& c : s) {
            if(isalpha(c)) charStack.emplace(c);
        }

        int idx = 0;
        while(!charStack.empty()) {
            if(isalpha(s[idx])) {
                s[idx] = charStack.top();
                charStack.pop();
            }
            ++idx;
        }

        return s;
    }
};
