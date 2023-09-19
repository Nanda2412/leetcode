class Solution {
public:
    int maximumValue(vector<string>& strs) {
        int result = 0;

        const auto num_reg = regex("^[0-9]+$");
        for(const auto& str : strs) {
            if(regex_match(str, num_reg)) {
                result = max(result, stoi(str));
            } else {
                result = max(result, static_cast<int>(str.size()));
            }
        }

        return result;
        
    }
};
