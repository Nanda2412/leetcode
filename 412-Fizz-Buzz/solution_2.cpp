class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> result(n);
        size_t i = 1;
        ranges::for_each(result, [&](auto& str) {
            str = to_string(i++);
        });

        for(int i = 0; i < n; ++i) {
            if(i + 1 == 3 || i + 1 == 5) {
                for(int j = i; j < n; j += i + 1) {
                    result[j] = i + 1 == 3 ? "Fizz" : ( result[j] == "Fizz" ? "FizzBuzz" : "Buzz");
                }
            }
        }

        return result;
    }
};
