class Solution {
public:
    int similarPairs(vector<string>& words) {
        unordered_map<string, int> countMap;
        for(auto& word : words) {
            sort(word.begin(), word.end());
            word.erase(unique(word.begin(), word.end()), word.end());

            ++countMap[word];
        }

        int result = 0;
        for(const auto&[_, count] : countMap) {
            result += ( count * (count - 1) ) / 2;
        }

        return result;
    }
};
