class Solution {
public:
    int maximumValue(vector<string>& strs) {
        int result = 0;

        const auto isDigit = [](const char& c) {
            return isdigit(c);
        };
        for(const auto& str : strs) {
            if(all_of(str.begin(), str.end(), isDigit)) {
                if(str.find_first_not_of('0') == string::npos) continue;

                int num = 0;
                for(const auto& c : str) {
                    num = num * 10 + c - '0';
                }

                result = max(result, num);
            } else {
                result = max(result, static_cast<int>(str.size()));
            }
        }

        return result;
        
    }
};
