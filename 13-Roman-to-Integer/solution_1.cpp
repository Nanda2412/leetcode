class Solution {
public:
    int romanToInt(string s) {
        int result = 0;
        char prevChar = ' ';
        for(int i = 0; i < s.size(); ++i) {
            switch(s[i]) {
                case 'I':
                    result += 1;
                    break;
                case 'V':
                    if(prevChar == 'I') result += 3;
                    else result += 5;
                    break;
                case 'X':
                    if(prevChar == 'I') result += 8;
                    else result += 10;
                    break;
                case 'L':
                    if(prevChar == 'X') result += 30;
                    else result += 50;
                    break;
                case 'C':
                    if(prevChar == 'X') result += 80;
                    else result += 100;
                    break;
                case 'D':
                    if(prevChar == 'C') result += 300;
                    else result += 500;
                    break;
                case 'M':
                    if(prevChar == 'C') result += 800;
                    else result += 1000;
                    break;
            }

            prevChar = s[i];
        }

        return result;
    }
};
