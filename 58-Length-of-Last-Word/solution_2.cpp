class Solution {
public:
    int lengthOfLastWord(string s) {
        bool processing = false;
        int result = 0;
        for(auto iter = s.rbegin(); iter != s.rend(); ++iter) {
            if(processing) {
                if(isalpha(*iter)) ++result;
                else break;
            }

            if(isalpha(*iter) && !processing) {
                processing = true;
                result = 1;
            }
        }

        return result;
    }
};
