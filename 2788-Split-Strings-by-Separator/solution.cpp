class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& words, char separator) {
        vector<string> result;
        for(const auto& word : words) {
            stringstream ss{word};
            string _word;
            while(getline(ss, _word, separator)) {
                if(!_word.empty()) result.emplace_back(_word);
            }
        }

        return result;
    }
};
