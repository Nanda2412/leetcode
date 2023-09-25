class Solution {
public:
    int countOdds(int low, int high) {
        int result = 0;
        for(int i = low; i <=high; ++i) {
            if(i & 1) ++result;
        }

        return result;
    }
};
