class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
    vector<int> runSum;
    runSum.push_back(nums[0]);
    for (int i = 1; i < nums.size(); i++)
    {
        runSum.push_back(nums[i] + runSum[i - 1]);
    }
    return runSum;
    }
};