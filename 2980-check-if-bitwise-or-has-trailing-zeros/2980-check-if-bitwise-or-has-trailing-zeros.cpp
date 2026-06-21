class Solution {
public:
    bool hasTrailingZeros(vector<int>& nums) {
        int even = 0;
        int size = nums.size();
        for (int i = 0; i < size; i++)
        {
            if (nums[i] % 2 == 0)
            {
                even++;
            }

            if (even == 2)
            {
                return true;
            }
        }
        return false;
    }
};