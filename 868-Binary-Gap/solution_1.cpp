class Solution {
public:
    int binaryGap(int n) {
        const auto binary = bitset<32>(n);
        const auto n_str = binary.to_string();

        const auto cnt_1 = count(n_str.begin(), n_str.end(), '1');

        if(cnt_1 == 1) return 0;

        size_t start = n_str.find('1') + 1, end;
        int result = 0;
        while((end = n_str.find('1', start)) != string::npos) {
            result = max(result, static_cast<int>(end - start + 1));
            start = end + 1;
        }

        return result;
    }
};
