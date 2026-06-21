class Solution {
public:
    int minPartitions(string n) {
    int max = 0;
    int size = n.length();
    for (int i = 0; i < size; i++)
    {
        if (n[i] - 48 > max)
        {
            max = n[i] - 48;
        }
    }
    return max;
    }
};