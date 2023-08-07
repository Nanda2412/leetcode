class Solution {
public:
    int commonFactors(int a, int b) {
        auto _min = min(a, b);

        int result = 0;
        for(int i = _min; i >= 1; i--) {
            if(a%i == 0 && b%i == 0) ++result;
        }

        return result;
    }
};
