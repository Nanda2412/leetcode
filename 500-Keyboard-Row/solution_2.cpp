class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        static unordered_map<int, unordered_set<char>> rowMap{
            {1, unordered_set<char>{'q','w','e','r','t','y','u','i','o','p'}},
            {2, unordered_set<char>{'a','s','d','f','g','h','j','k','l'}},
            {3, unordered_set<char>{'z','x','c','v','b','n','m'}}};

        struct SearchRow {
            int _idx;

            SearchRow(int idx) : _idx(idx) {}
            bool operator()(const char c) {
                return rowMap[_idx].count(tolower(c));
            }
        };

        vector<string> result;

        for(const auto& word : words) {
            if(all_of(word.begin(), word.end(), SearchRow(1)) || 
               all_of(word.begin(), word.end(), SearchRow(2)) || 
               all_of(word.begin(), word.end(), SearchRow(3))) {
                   result.emplace_back(word);
               }
        }

        return result;
    }
};
