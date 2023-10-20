class Solution {
public:
    int binaryGap(int n) {
        const auto binary = bitset<32>(n);
        vector<int> indices;

        for(int i = 0; i < binary.size(); ++i) {
            if(binary.test(i)) indices.emplace_back(i);
        }

        if(indices.size() == 1) return 0;

        vector<int> diff;
        adjacent_difference(indices.begin(), indices.end(), back_inserter(diff));
        return *max_element(diff.begin() + 1, diff.end());
    }
};
