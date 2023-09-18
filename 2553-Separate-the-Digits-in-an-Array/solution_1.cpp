class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        string numStr;
        for(const auto& num : nums) {
            numStr += to_string(num);
        }

        vector<int> result;
        for(const auto& c : numStr) {
            result.emplace_back(c - '0');
        }

        return result;
    }
};
