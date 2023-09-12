class Solution {
public:
    int countSegments(string s) {
        stringstream ss{s};
        string word;
        int result = 0;

        while(getline(ss, word, ' ')) {
            if(!word.empty()) ++result;
        }

        return result;
    }
};
