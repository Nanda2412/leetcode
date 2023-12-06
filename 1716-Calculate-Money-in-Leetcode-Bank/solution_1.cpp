class Solution {
public:
    int totalMoney(int n) {
        int prev = 1, curr = 0, result = 0, count = 0;
        while(n--) {
            if(count == NUM_WEEK_DAYS) {
                curr = prev + 1;
                prev = curr;
                result += curr;
                count = 1;
                continue;
            }
            result += ++curr;
            ++count;
        }
        return result;
    }
private:
    const int NUM_WEEK_DAYS{7};
};
