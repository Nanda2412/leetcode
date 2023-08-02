class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        unordered_map<char, queue<int>> indexMap;

        int idx = 0;
        for(const auto& word : word1) {
            for(const auto& c : word) {
                indexMap[c].emplace(idx++);
            }
        }

        idx = 0;
        for(const auto& word : word2) {
            for(const auto& c : word) {
                if(indexMap[c].front() != idx++) return false;
                indexMap[c].pop();
                if(indexMap[c].empty()) indexMap.erase(c);
            }
        }

        return indexMap.empty();
    }
};
