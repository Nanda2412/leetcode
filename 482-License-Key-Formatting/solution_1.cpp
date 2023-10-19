class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        stack<char> charStack;
        ranges::for_each(s, [&](auto& c) {
            if(isalnum(c)){
                if(isalpha(c) && islower(c)) {
                    charStack.emplace(toupper(c));
                } else {
                    charStack.emplace(c);
                }
            }
        });
    
        string result;
        while(charStack.size() > k) {
            for(int i = 0; i < k; ++i) {
                result += charStack.top();
                charStack.pop();
            }

            result += '-';
        }

        while(!charStack.empty()) {
            result += charStack.top();
            charStack.pop();
        }

        reverse(result.begin(), result.end());

        return result;
    }
};
