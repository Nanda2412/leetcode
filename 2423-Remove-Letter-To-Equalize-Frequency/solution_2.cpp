class Solution {
public:
    bool equalFrequency(string word) {
        unordered_map<char, int> charFreq;

        for(const auto& c : word) {
            ++charFreq[c];
        }

        unordered_map<int, int> freqFreq;
        for(const auto&[_, count] : charFreq) {
            ++freqFreq[count];
        }

        if(freqFreq.size() > 2) return false;

        if(freqFreq.size() == 1) {
            if(freqFreq.begin()->first == word.size() && freqFreq.begin()->second == 1)
                return true;

            if(freqFreq.begin()->first == 1 && freqFreq.begin()->second == word.size())
                return true;

            return false;
        }

        set<int> uniqueFreqs;
        for(const auto&[freq, _] : freqFreq) {
            uniqueFreqs.emplace(freq);
        }
        const auto smallFreq = *uniqueFreqs.begin();
        const auto largeFreq = *uniqueFreqs.rbegin();

        if(largeFreq == smallFreq + 1 && freqFreq[largeFreq] == 1) return true;

        if(smallFreq == 1 && freqFreq[smallFreq] == 1) return true;

        return false;
    }
};
