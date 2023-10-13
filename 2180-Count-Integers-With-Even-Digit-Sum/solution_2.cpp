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
        int result = 0;
        for(int i = 1; i <= num; ++i) {
            const auto sum_of_digits = sumDigits(i);
            if(sum_of_digits % 2 == 0) ++result;
        }

        return result;
    }
};
