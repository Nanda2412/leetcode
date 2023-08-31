class Solution {
public:
    bool isValid(string s) {
        stack<char> left_chars;
        for(const auto& c : s) {
            if(c == '(' || c == '{' || c == '[') {
                left_chars.emplace(c);
            } else{
                if(left_chars.empty()) return false;

                if((c == ')' && left_chars.top() != '(') ||
                   (c == '}' && left_chars.top() != '{') ||
                   (c == ']' && left_chars.top() != '[')) {
                       return false;
                }

                left_chars.pop();
            }
        }

        return left_chars.empty();
    }
};
