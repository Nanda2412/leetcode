class Solution {
public:
    string reversePrefix(string word, char ch) {
        if(word.find(ch) == string::npos) return word;

        stack<char> charStack;
        for(char c : word) {
            charStack.emplace(c);
            if(c == ch) break;
        }

        string result;
        while(!charStack.empty()) {
            result += charStack.top();
            charStack.pop();
        }

        result += word.substr(result.size(), word.size() - result.size());
        return result;
    }
};
