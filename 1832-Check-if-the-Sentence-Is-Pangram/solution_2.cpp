class Solution {
public:
    bool checkIfPangram(string sentence) {
        array<int, 26> count; count.fill(0);
        for(char c : sentence) {
            ++count[c - 'a'];
        }

        return ranges::all_of(count, [](int num) {
            return num >= 1;
        });
    }
};
