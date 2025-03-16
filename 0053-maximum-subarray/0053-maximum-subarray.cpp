class Solution 
{
public:
    int maxSubArray(vector<int>& nums) 
    {
        int prefix_sum = 0;
        int largest = nums[0];

        for(int num : nums)
        {
            prefix_sum += num;
            largest = max(prefix_sum, largest);

            if(prefix_sum < 0) prefix_sum = 0;
        }

        return largest;
    }
};