class Solution {
public:
    bool equalFrequency(string word) {
        unordered_map<char, int> charCount;

        for(const auto& c : word) {
            ++charCount[c];
        }

        auto charCountCopy = charCount;
        for(auto&[ch, count] : charCount) {
            --count;
            if(!count) charCountCopy.erase(ch);
            if(count) charCountCopy[ch] = count;

            int val = charCountCopy.begin()->second;
            static const auto equal = [&](const pair<char,int>&p) {
                return p.second == val;
            };
            if(all_of(charCountCopy.begin(), charCountCopy.end(), equal)) {
                return true;
            }

            charCountCopy[ch] = ++count;
        }

        return false;
    }
};
