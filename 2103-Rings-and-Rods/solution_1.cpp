class Solution {
public:
    int countPoints(string rings) {
        array<unordered_set<char>, 10> rods;
        reverse(rings.begin(), rings.end());

        int idx;
        for(const auto& ring : rings) {
            if(!isalpha(ring)) idx = ring - '0';
            else rods[idx].emplace(ring);
        }

        auto result = count_if(rods.begin(), rods.end(), [](const auto& uset) {
            return uset.size() == 3;
        });

        return result;

    }
};
