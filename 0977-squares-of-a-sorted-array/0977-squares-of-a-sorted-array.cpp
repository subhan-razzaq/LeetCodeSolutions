class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
    int temp = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        nums[i] = pow(nums[i], 2);
 
    }
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (nums[i] > nums[j])
            {
                temp = nums[j];
                nums[j] = nums[i];
                nums[i] = temp;
            }
        }
    }
    return nums;
    }
};