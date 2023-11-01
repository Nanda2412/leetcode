class Solution {
public:
    int romanToInt(string s) {
        const static unordered_map<char, int> svMap = {{'I', 1}, {'V', 5}, {'X', 10},
                                          {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};

        int sum = svMap.at(s.back());
        for(int i = s.size() - 2; i >= 0; --i) {
            if(svMap.at(s[i]) < svMap.at(s[i + 1])) {
                sum -= svMap.at(s[i]);
            } else {
                sum += svMap.at(s[i]);
            }
        }

        return sum;
    }
};
