class Solution {
public:
    int bitwiseComplement(int n) {
        if(!n) return 1;
        
        int res = 0, i = 0;
        while(n) {
            if(!(n & 1)) {
                res += pow(2, i);
            }
            n >>= 1;
            ++i;
        }

        return res;
    }
};
