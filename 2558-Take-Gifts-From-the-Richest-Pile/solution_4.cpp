class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<int> max_heap(gifts.begin(), gifts.end());
        long long result = accumulate(gifts.begin(), gifts.end(), 0.0);

        while(k--) {
            const auto top = max_heap.top();
            const auto input = floor(sqrt(top));
            result += input - top;
            max_heap.pop();
            max_heap.emplace(input);
        }

        return result;
    }
};
