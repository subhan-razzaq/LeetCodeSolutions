class Solution {
public:
    bool isPowerOfTwo(int n) {
    if (n <= 0)
    {
        return false;
    }
    long long int x = 1;
    while (x < n)
    {
        x <<= 1;
    }
    return x == n;
    }
};