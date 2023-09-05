class Solution {
public:
    int numberOfSteps(int num) {
        int result = 0;
        while(num) {
            ++result;
            num & 1 ? num -= 1 : num >>= 1; 
        }

        return result;
    }
};
