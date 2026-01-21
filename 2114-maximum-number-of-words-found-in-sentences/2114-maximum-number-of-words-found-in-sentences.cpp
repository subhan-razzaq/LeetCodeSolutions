class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
    int currentWords = 0;
    int maxWords = 0;
    for (string sentence : sentences) 
    {
        currentWords = count(sentence.begin(), sentence.end(), ' ') + 1;
        if (currentWords > maxWords)
        {
            maxWords = currentWords;
        }
    }
    return maxWords;
    }
};