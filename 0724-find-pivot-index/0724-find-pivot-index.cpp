class Solution {
public:
    int pivotIndex(vector<int>& nums) {
    int leftSum = 0;
    int rightSum = 0;
    int size = nums.size();
    for (int i = 0; i < size; i++)
    {
        rightSum = accumulate(nums.begin() + i + 1, nums.end(), 0);
        leftSum = accumulate(nums.begin(), nums.begin() + i, 0);
        if (rightSum == leftSum)
        {
            return i;
        }
    }
    return -1;
    }
};