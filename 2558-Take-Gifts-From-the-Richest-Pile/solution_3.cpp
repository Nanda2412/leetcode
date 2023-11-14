class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<int> max_heap(gifts.begin(), gifts.end());

        while(k--) {
            const auto top = max_heap.top();
            max_heap.pop();
            max_heap.emplace(floor(sqrt(top)));
        }

        long long result = 0;
        while(!max_heap.empty()) {
            result += max_heap.top();
            max_heap.pop();
        }

        return result;
    }
};
