class Solution {
public:
    int accountBalanceAfterPurchase(int purchaseAmount) {
        return purchaseAmount % 10 >= 5 ? 100 - (purchaseAmount + (10 - purchaseAmount % 10)) : 100 - (purchaseAmount - purchaseAmount % 10);
    }
};
