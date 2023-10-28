class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, pair<int, int>> charCountWithIdx;
        
        for(int i = 0; i < s.size(); ++i) {
            ++charCountWithIdx[s[i]].first;
            charCountWithIdx[s[i]].second = i;
        }
        
        int result = INT_MAX;
        for(const auto [_, cntIdxPair] : charCountWithIdx) {
            const auto [cnt, idx] = cntIdxPair;
            if(cnt == 1) {
                result = min(result, idx);
            }
        }
        
        return result == INT_MAX ? -1 : result;
    }
};
