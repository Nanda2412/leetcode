class Solution {
private:
    bool isPalindrome(const string& word) {
        for(int left = 0, right = word.size() - 1; left < right; ++left, --right) {
            if(word[left] != word[right]) return false;
        }

        return true;
    }
public:
    string firstPalindrome(vector<string>& words) {
        for(const auto& word : words) {
            if(isPalindrome(word)) return word;
        }

        return "";
    }
};
