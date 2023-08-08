class Solution {
public:
    string removeTrailingZeros(string num) {
        int idx = num.size() - 1;
        while(num[idx] == '0') {
            idx--;
        }

        if(idx == num.size() - 1) return num;

        num.erase(num.begin() + idx + 1, num.end() );
        return num;
    }
};
