class Solution {
public:
    bool isPalindrome(string s) {
        deque<char> charDeq;
        for(const auto& c : s) {
            if(isalnum(c)) charDeq.emplace_back(tolower(c));
        }

        while(!charDeq.empty()) {
            if(charDeq.front() != charDeq.back()) return false;

            if(charDeq.size() >= 2) {
                charDeq.pop_front();
                charDeq.pop_back();
            } else {
                charDeq.pop_back();
            }
        }

        return true;
    }
};
