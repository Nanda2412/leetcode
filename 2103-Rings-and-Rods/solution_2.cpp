class Solution {
public:
    int countPoints(string rings) {
        array<bitset<3>, 10> rods;
        
        for(int i = 1; i < rings.size(); i += 2) {
           switch(rings[i - 1]) {
               case 'R':
                    rods[rings[i] - '0'].set(0);
                    break;
                case 'G':
                    rods[rings[i] - '0'].set(1);
                    break;
                case 'B':
                    rods[rings[i] - '0'].set(2);
                    break;
           }
        }

        auto result = count_if(rods.begin(), rods.end(), [](const auto& rod) {
            return rod.all();
        });

        return result;
    }
};
