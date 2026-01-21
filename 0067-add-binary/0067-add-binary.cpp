class Solution {
public:
    string addBinary(string a, string b) {
    int aLength = a.length() - 1;
    int bLength = b.length() - 1;
    int carry = 0;
    int sum = 0;
    string result = "";
    while (aLength >= 0 || bLength >= 0 || carry == 1)
    {
        sum = carry;
        if (aLength >= 0)
        {
            sum += (a[aLength] - '0');
        }
        if (bLength >= 0)
        {
            sum += (b[bLength] - '0');
        }
        aLength--;
        bLength--;
        result.insert(0,1,('0' + sum % 2));
        carry = sum / 2;
    }
    return result;
    }
};