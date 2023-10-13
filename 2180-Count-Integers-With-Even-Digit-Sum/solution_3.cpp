class Solution {
    int sumDigits(int n) {
        const auto str = to_string(n);

        int temp = 0;
        for(const auto& c : str) {
            temp += c - '0';
        }        

        return temp;
    }
public:
    int countEven(int num) {
        if(num == 1) return 0;
        int result = sumDigits(num) % 2 == 0;
        return  result + countEven(num - 1);
    }
};
