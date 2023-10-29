class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        vector<string> nameVec, typedVec;

        const auto splitStr = [](const string& str, vector<string>& strVec) {
             size_t start = 0, end;

            while((end = str.find_first_not_of(str[start], start)) != string::npos) {
                strVec.emplace_back(str.substr(start, end - start));
                start = end;
            }

            strVec.emplace_back(str.substr(start));
        };

        splitStr(name, nameVec);
        splitStr(typed, typedVec);

        if(nameVec.size() != typedVec.size()) return false;

        for(int i = 0; i < nameVec.size(); ++i) {
            if(typedVec[i].find(nameVec[i]) == string::npos) return false;
        }

        return true;
    }
};
