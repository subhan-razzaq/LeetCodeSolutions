class Solution {
public:
    bool isSubsequence(string s, string t) {
    if (s.length() == 0)
    {
        return true;
    }
    int indexSubsequence = 0;
    for (int i = 0; i < t.length(); i++)
    {
        if (t[i] == s[indexSubsequence])
        {
            indexSubsequence++;
            if (indexSubsequence == s.length())
            {
                return true;
            }
        }
    }
    return false;
    }
};