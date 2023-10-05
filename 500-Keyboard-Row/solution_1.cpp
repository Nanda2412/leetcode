class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        unordered_map<int, unordered_set<char>> rowMap{
            {1, unordered_set<char>{'q','w','e','r','t','y','u','i','o','p'}},
            {2, unordered_set<char>{'a','s','d','f','g','h','j','k','l'}},
            {3, unordered_set<char>{'z','x','c','v','b','n','m'}}};

        const auto canConstructFromRow_1 = [&](const char c) {
            return rowMap[1].count(tolower(c));
        };

        const auto canConstructFromRow_2 = [&](const char c) {
            return rowMap[2].count(tolower(c));
        };

        const auto canConstructFromRow_3 = [&](const char c) {
            return rowMap[3].count(tolower(c));
        };

        vector<string> result;

        for(const auto& word : words) {
            if(all_of(word.begin(), word.end(), canConstructFromRow_1) || 
               all_of(word.begin(), word.end(), canConstructFromRow_2) || 
               all_of(word.begin(), word.end(), canConstructFromRow_3)) {
                   result.emplace_back(word);
               }
        }

        return result;
    }
};
