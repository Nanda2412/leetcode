class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        while(k--) {
            int max_idx = -1, max_value = INT_MIN;
            for(int i = 0; i < gifts.size(); ++i) {
                if(gifts[i] > max_value) {
                    max_value = gifts[i];
                    max_idx = i;
                }
            }

            gifts[max_idx] = floor(sqrt(max_value));
        }

        return accumulate(gifts.begin(), gifts.end(), 0.0);
    }
};
