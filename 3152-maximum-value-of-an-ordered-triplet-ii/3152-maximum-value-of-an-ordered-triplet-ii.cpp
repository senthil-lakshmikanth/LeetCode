class Solution 
{
public:
    long long maximumTripletValue(vector<int>& nums) 
    {
        int n = nums.size();

        long long maxVal = 0;

        vector <int> maxLeft (n);
        vector <int> maxRight (n);

        for(int i = 1; i < n - 1; i++)
        {
            maxLeft[i] = max(nums[i - 1], maxLeft[i - 1]);
            maxRight[n - 1 - i] = max(nums[n - i], maxRight[n - i]);
        }


        for(int j = 1; j < n - 1; j++)
            maxVal = max((long long)(maxLeft[j] - nums[j]) * maxRight[j], maxVal);
        
        return maxVal;

    }
};