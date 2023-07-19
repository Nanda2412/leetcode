class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(const auto& word : words) {
            auto temp = word;
            reverse(temp.begin(), temp.end());
            if(temp == word) return word;
        }

        return "";
    }
};
