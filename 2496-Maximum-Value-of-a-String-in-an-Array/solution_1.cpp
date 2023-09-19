class Solution {
public:
    int maximumValue(vector<string>& strs) {
        int result = 0;

        const auto isDigit = [](const char& c) {
            return isdigit(c);
        };
        for(const auto& str : strs) {
            if(all_of(str.begin(), str.end(), isDigit)) {
                result = max(result, stoi(str));
            } else {
                result = max(result, static_cast<int>(str.size()));
            }
        }

        return result;
        
    }
};
