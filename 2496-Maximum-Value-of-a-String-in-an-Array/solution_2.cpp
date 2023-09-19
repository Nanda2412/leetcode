class Solution {
public:
    int maximumValue(vector<string>& strs) {
        int result = 0;

        const auto isAlpha = [](const char& c) {
            return isalpha(c);
        };
        for(const auto& str : strs) {
            if(any_of(str.begin(), str.end(), isAlpha)) {
                result = max(result, static_cast<int>(str.size()));
            } else {
                if(str.find_first_not_of('0') == string::npos) continue;

                int num = 0;
                for(const auto& c : str) {
                    num = num * 10 + c - '0';
                }

                result = max(result, num);
            }
        }

        return result;
        
    }
};
