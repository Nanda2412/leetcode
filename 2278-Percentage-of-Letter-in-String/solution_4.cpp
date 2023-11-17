class Solution {
    void preComputePercentage(const string& s) {
        for(char c : s) {
            if(!_cache.count(c)) {
                const auto percentage = (static_cast<double>(ranges::count(s, c))/s.size()) * 100;
                _cache.emplace(c, percentage);
            }
        }
    }
public:
    int percentageLetter(string s, char letter) {
        preComputePercentage(s);
        return _cache[letter];
    }
private:
    unordered_map<char, double> _cache;
};
