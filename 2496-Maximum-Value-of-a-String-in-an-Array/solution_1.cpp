class Solution {
public:
    int maximumValue(vector<string>& strs) {
        int result = 0;

        for(const auto& str : strs) {
            if(all_of(str.begin(), str.end(), ::isdigit)) {
                result = max(result, stoi(str));
            } else {
                result = max(result, static_cast<int>(str.size()));
            }
        }

        return result;
        
    }
};
