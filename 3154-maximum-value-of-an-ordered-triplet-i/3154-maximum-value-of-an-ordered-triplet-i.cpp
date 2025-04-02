class Solution 
{
public:
    long long maximumTripletValue(vector<int>& nums) 
    {
        int n = nums.size();

        long long maxVal = 0;

        int i = 0;
        for(int j = 1; j < n - 1; j++)
        {
            if(nums[i] < nums[j])   
            {  
                i = j; 
                continue; 
            }
            
            for(int k = j + 1; k < n; k++)
                maxVal = max((long long)(nums[i] - nums[j]) * nums[k], maxVal);
        }

        return maxVal;
    }
};