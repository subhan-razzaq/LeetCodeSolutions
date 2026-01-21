class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
    int currentWords = 0;
    int maxWords = 0;
    for (int i = 0; i < sentences.size(); i++) 
    {
        currentWords = count(sentences[i].begin(), sentences[i].end(), ' ') + 1;
        if (currentWords > maxWords)
        {
            maxWords = currentWords;
        }
    }
    return maxWords;
    }
};