class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
    vector<int> seen;
    vector<int> repeated;
    for (int i = 0; i < nums.size(); i++) 
    {
        if (count(seen.begin(), seen.end(), nums[i]) == 0)
        {
            seen.push_back(nums[i]);
        }
        else if (count(seen.begin(), seen.end(), nums[i]) == 1)
        {
            repeated.push_back(nums[i]);
        }
    } 
    return repeated; 
    }
};