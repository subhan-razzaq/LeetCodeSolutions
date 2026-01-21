class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
    int index = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == target)
        {
            index = i;
            return index;
        }
        else if (target > nums[i])
        {
            index++;
        }
    }
    return index;
    }
};