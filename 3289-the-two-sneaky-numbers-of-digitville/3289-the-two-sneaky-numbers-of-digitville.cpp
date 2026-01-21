class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
    // can be optimized to O(n) using hashing
    vector<int> seen;
    vector<int> repeated;
    int counter = 0;
    for (int i = 0; i < nums.size(); i++) 
    {
        counter = count(seen.begin(), seen.end(), nums[i]);
        if (counter == 0)
        {
            seen.push_back(nums[i]);
        }
        else if (counter == 1)
        {
            repeated.push_back(nums[i]);
        }
    } 
    return repeated; 
    }
};