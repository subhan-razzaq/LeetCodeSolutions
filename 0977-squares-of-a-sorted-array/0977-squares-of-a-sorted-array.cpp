class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
    int size = nums.size();
    vector<int> results(size);
    int indexFilled = size - 1;
    int left = 0;
    int right = size - 1;
    for (int i = 0; i < size; i++)
    {
        int leftNum = abs(nums[left]);
        int rightNum = abs(nums[right]);
        if (leftNum > rightNum)
        {
            results[indexFilled] = leftNum*leftNum;
            left++;
            indexFilled--;
            
        }
        else if (left <= right)
        {
            results[indexFilled] = rightNum*rightNum;
            right--;
            indexFilled--;
        }
    }
    return results;
    }
};