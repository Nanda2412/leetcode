class Solution {
public:
    int totalMoney(int n) {
        if(n <= NUM_WEEK_DAYS) return (n * (n+1)) / 2;

        int num_weeks_invested = n / NUM_WEEK_DAYS;
        long result = 0;
        for(int i = 1; i <= num_weeks_invested; ++i) {
            result += NUM_WEEK_DAYS / 2 * (2 * i + NUM_WEEK_DAYS - 1);
        }
        double add_days_invested = n % static_cast<int>(NUM_WEEK_DAYS);
        result += add_days_invested / 2 * (2 * (num_weeks_invested + 1) + add_days_invested - 1);
        return result;
    }
private:
    const double NUM_WEEK_DAYS{7.0};
};
