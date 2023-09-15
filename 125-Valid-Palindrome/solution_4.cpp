class Solution {
public:
    bool isPalindrome(string s) {
        stack<char> charStack;

        size_t idx = 0;
        for(const auto& c : s) {
            if(isalnum(c)) {
                auto lower_c = tolower(c);
                s[idx] = lower_c;
                charStack.emplace(lower_c);
            }
            ++idx;
        }

        hash<string> hash_string;
        const auto before_hash = hash_string(s);

        idx = 0;
        while(!charStack.empty()) {
            if(isalnum(s[idx])) {
                s[idx] = charStack.top();
                charStack.pop();
            }
            ++idx;
        }

        const auto after_hash = hash_string(s);
        return before_hash == after_hash;
    }
};
