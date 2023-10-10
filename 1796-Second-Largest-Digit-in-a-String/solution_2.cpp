class Solution {
public:
    int secondHighest(string s) {
        int highest = -1, secondHighest = -1;

        for(const auto& c : s) {
            if(isdigit(c)) {
                const auto num = c - '0';
                if(num > highest) {
                    secondHighest = highest;
                    highest = num;
                } else {
                    if(num != highest && num > secondHighest) {
                        secondHighest = num;
                    }
                }
            }
        }

        return secondHighest;
    }
};
