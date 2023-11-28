class Solution {
public:
    string reversePrefix(string word, char ch) {
        size_t left = 0, right = word.find(ch);

        if(right != string::npos) {
            while(left < right) {
                swap(word[left++], word[right--]);
            }
        }

        return word;
    }
};
