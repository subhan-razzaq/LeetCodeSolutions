class Solution {
public:
    void moveZeroes(vector<int>& nums) {
    int indexW = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] != 0)
        {
            nums[indexW] = nums[i];
            indexW++;
        }
    }
    
    for (int i = indexW; i < nums.size(); i++)
    {
        nums[i] = 0;
    }
    }
};