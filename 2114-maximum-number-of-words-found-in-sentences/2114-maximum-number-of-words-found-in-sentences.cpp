class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
    int currentWords = 0;
    int maxWords = 0;
    for (string sentence : sentences) 
    {
        currentWords = 1;
        for (char c : sentence)
        {
            if (c == ' ')
            {
                currentWords++;
            }
        }
        if (currentWords > maxWords)
        {
            maxWords = currentWords;
        }
    }
    return maxWords;
    }
};