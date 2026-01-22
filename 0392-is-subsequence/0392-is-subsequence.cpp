class Solution {
public:
    bool isSubsequence(string s, string t) {
    int indexSubsequence = 0;
    string check = "";
    for (int i = 0; i < t.length(); i++)
    {
        if (t[i] == s[indexSubsequence])
        {
            check += s[indexSubsequence];
            indexSubsequence++;
        }
    }
    if (check == s)
    {
        return true;
    }
    else
    {
        return false;
    }
    }
};