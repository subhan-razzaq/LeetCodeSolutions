class Solution {
public:
    int pivotIndex(vector<int>& nums) {
    int leftSum = 0;
    int rightSum = 0;
    int totalSum = accumulate(nums.begin(), nums.end(), 0);
    int size = nums.size();
    for (int i = 0; i < size; i++)
    {
        rightSum = totalSum - leftSum - nums[i];
        if (rightSum == leftSum)
        {
            return i;
        }
        leftSum += nums[i];
    }
    return -1;
    }
};