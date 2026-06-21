class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int size = costs.size();
        int max = 0;
        // find max
        for (int i = 0; i < size; i++)
        {
            if (costs[i] > max)
            {
                max = costs[i];
            }
        }
        
        // initialize new vector of size max + 1
        vector<int> counts(max + 1, 0); 

        // storing counts of each element
        for (int i = 0; i < size; i++)
        {
            counts[costs[i]]++;
        }
        int icecream = 0;
        int k = 1;
        int affordable = 0;
        // add up total number of icecreams
        while (k <= max)
        {
            affordable = min(counts[k], coins / k);
            icecream += affordable;
            coins -= affordable*k;
            k++;
        }
        return icecream;
    }
};