class Solution 
{
public:
    bool canPartition(vector<int>& nums) 
    {
        int sum = 0;
        for(int num : nums) sum += num;

        if(sum % 2 != 0)  return false;

        int target = sum / 2;
        vector<vector<int>> dp (nums.size(), vector<int>(target + 1, -1));

        return canReachTarget(nums, 0, 0, target, dp);
    }

    bool canReachTarget(vector <int>& nums, int index, int sum, int target, vector<vector<int>>& dp)
    {
        if(sum == target)   return true;
        if(index >= nums.size() || sum > target)    return false;

        if(dp[index][sum] != -1)    return dp[index][sum];

        bool pick = canReachTarget(nums, index + 1, sum + nums[index], target, dp);
        bool skip = canReachTarget(nums, index + 1, sum,               target, dp);

        return dp[index][sum] = pick || skip;
    }
};