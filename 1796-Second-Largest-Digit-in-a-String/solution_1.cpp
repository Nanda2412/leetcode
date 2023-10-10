class Solution {
public:
    int secondHighest(string s) {
        set<int> sortedNums;

        for(const auto& c : s) {
            if(isdigit(c)) {
                sortedNums.emplace(c - '0');
            }
        }

        return sortedNums.size() > 1 ? *next(sortedNums.rbegin()) : -1;
    }
};
