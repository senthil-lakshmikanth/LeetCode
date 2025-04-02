class Solution 
{
public:
    long long maximumTripletValue(vector<int>& nums) 
    {
        int n = nums.size();

        long long maxVal = 0;

        long long imax = 0;
        long long dmax = 0;        

        for(int k = 0; k < n; k++)
        {
            maxVal = max(dmax * nums[k], maxVal);

            imax = max((long long)nums[k], imax);
            dmax = max(imax - nums[k], dmax);
        }
        
        return maxVal;

    }
};