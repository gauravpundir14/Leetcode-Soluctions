class Solution {
public:
    bool arrayStringsAreEqual(std::vector<std::string>& word1, std::vector<std::string>& word2) {
        string concatenatedWord1 = accumulate(word1.begin(), word1.end(), string(""));
        string concatenatedWord2 = accumulate(word2.begin(), word2.end(), string(""));

        return concatenatedWord1 == concatenatedWord2;
    }
};