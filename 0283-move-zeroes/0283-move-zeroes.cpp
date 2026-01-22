class Solution {
public:
    void moveZeroes(vector<int>& nums) {
    int numZeroes = count(nums.begin(), nums.end(), 0);
    for (int i = 0; i < nums.size(); i++)
    {
        if (i == nums.size() - numZeroes)
        {
            break;
        }
        while (nums[i] == 0)
        {
            nums.erase(nums.begin() + i);
            nums.push_back(0);
        }
    }
    }
};