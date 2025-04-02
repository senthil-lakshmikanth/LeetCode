class Solution 
{
public:
    long long maximumTripletValue(vector<int>& nums) 
    {
        int n = nums.size();

        long long maxVal = 0;

        vector <int> maxLeft (n);
        vector <int> maxRight (n);

        maxLeft[0] = nums[0];
        for(int i = 1; i < n; i++)
            maxLeft[i] = max(nums[i], maxLeft[i - 1]);
        
        maxRight[n - 1] = nums[n - 1];
        for(int k = n - 2; k >= 0; k--)
            maxRight[k] = max(nums[k], maxRight[k + 1]);

        for(int j = 1; j < n - 1; j++)
            maxVal = max((long long)(maxLeft[j - 1] - nums[j]) * maxRight[j + 1], maxVal);
        
        return maxVal;

    }
};