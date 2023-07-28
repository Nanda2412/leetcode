class Solution {
public:
    int subtractProductAndSum(int n) {
        stringstream ss;
        ss << n;

        int product = 1, sum = 0;
        string digits = ss.str();

        for(const auto& digit : digits) {
            product *= static_cast<int>( digit - '0');
            sum += static_cast<int>( digit - '0');
        }

        return product - sum;
    }
};
