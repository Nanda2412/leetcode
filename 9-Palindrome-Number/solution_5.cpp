class Solution {
  int getDigitCount(int x) {
    return x == 0 ? 1 : 1 + static_cast<int>(floor(log10(x)));
  }

  int getNthDigitFromRight(int x, int n) {
    return floor((x % static_cast<long>(pow(10 , n + 1))) / static_cast<long>(pow(10, n)));
  }
public:
    bool isPalindrome(int x){
      if (x < 0) {
          return false;
      }

      int lo = 0;
      int hi = getDigitCount(x) - 1;
      while (lo < hi) {
          if (getNthDigitFromRight(x, lo) != getNthDigitFromRight(x, hi)) {
            return false;
          }

          ++lo;
          --hi;
      }

      return true;
  }
};
