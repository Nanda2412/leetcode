class Solution {
public:
    void reverseString(vector<char>& s) {
        stack<char> charStack;
        for(const auto& c : s) {
            charStack.emplace(c);
        }

        size_t idx = 0;
        while(!charStack.empty()) {
            s[idx++] = charStack.top();
            charStack.pop();
        }
    }
};
