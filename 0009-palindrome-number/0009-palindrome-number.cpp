class Solution {
public:
    bool isPalindrome(int x) {
        string Converted = to_string(x);
        string check = "";
        for (int i = Converted.length() - 1; i >= 0; i--)
        {
            check += Converted[i];
        }
        if (check == Converted)
        {
            return true;
        }
        else 
        {
            return false;
        }

    }
};