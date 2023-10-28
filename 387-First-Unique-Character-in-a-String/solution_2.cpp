class Solution {
public:
    int firstUniqChar(string s) {
        array<pair<int, int>, 26> charCountWithIdx;
        
        for(int i = 0; i < s.size(); ++i) {
            ++charCountWithIdx[s[i] - 'a'].first;
            charCountWithIdx[s[i] - 'a'].second = i;
        }
        
        int result = INT_MAX;
        for(const auto cntIdxPair : charCountWithIdx) {
            const auto [cnt, idx] = cntIdxPair;
            if(cnt == 1) {
                result = min(result, idx);
            }
        }
        
        return result == INT_MAX ? -1 : result;
    }
};
