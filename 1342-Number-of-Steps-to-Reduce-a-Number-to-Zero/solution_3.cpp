class Solution {
public:
    int numberOfSteps(int num) {
        auto num_str = bitset<32>(num).to_string();
        const auto pos = num_str.find_first_of('1');
        if(pos == string::npos) return 0;

        num_str.erase(num_str.begin() , num_str.begin() + pos);
        const auto count_1 = count(num_str.begin(), num_str.end(), '1');
        return num_str.size() + count_1 - 1;
    }
};
