class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
    int sumXOR = nums[0];
    for (int i = 1; i < nums.size(); i++) 
    {
        sumXOR = sumXOR | nums[i];
    }
    sumXOR = sumXOR * pow(2,nums.size() - 1);
    return sumXOR;
    }
};