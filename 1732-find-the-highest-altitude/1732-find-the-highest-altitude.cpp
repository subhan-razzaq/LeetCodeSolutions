class Solution {
public:
    int largestAltitude(vector<int>& gain) {
    int largest = 0;
    int current = 0;
    int size = gain.size();
    for (int i = 0; i < size; i++)
    {
        current += gain[i];
        if (current > largest)
        {
            largest = current;
        }
    }
    return largest;
    }
};