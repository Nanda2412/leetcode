class Solution {
public:
    int countSegments(string s) {
        if(s.empty()) return 0;
        
        int result = 0;
        bool processing = false;

        for(const auto& c : s) {
            if(processing) {
                if(c != ' ') continue;
                processing = false;
            }

            if(c != ' ' && !processing) {
                processing = true;
                ++result;
            }
        }

        return result;
    }
};
