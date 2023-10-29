class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        int i = 0, j =0;

        while(i < name.size() && j < typed.size()) {
            while(name[i] != typed[j] && j > 0 && typed[j] == typed[j - 1]) {
                ++j;
            }

            if(name[i] != typed[j]) return false;
            ++i, ++j;
        }


        if(i < name.size() || (j < typed.size() && any_of(typed.begin() + j, typed.end(), [&](char c){
            return c != name.back();
        }))) return false;

        return true;
    }
};
