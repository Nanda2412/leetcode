class Solution {
public:
    int numDifferentIntegers(string word) {
        // replace all alphabets with space
        ranges::replace_if(word, ::isalpha, ' ');
        // remove leading zeros
        word.erase(0, word.find_first_not_of(' '));
        // remove trailing zeros
        word.erase(word.find_last_not_of(' ') + 1);

        // lambda function to remove leading zeros
        const auto static removeLeadingZeros = [](string str) {
            if(str[0] == '0')
                str.erase(str.find_first_of('0'), str.find_first_not_of('0'));

            return str;
        };

        size_t start = 0, end;
        unordered_set<string> uniqueNums;

        while((end = word.find_first_of(' ', start)) != string::npos) {
            uniqueNums.emplace(removeLeadingZeros(word.substr(start, end - start)));
            start = word.find_first_not_of(' ', end);
        }

        const auto finalStr = word.substr(start);
        if(!finalStr.empty()) {
            uniqueNums.emplace(removeLeadingZeros(finalStr));
        }

        return uniqueNums.size();
    }
};
