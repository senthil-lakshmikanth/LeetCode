class Solution 
{
public:
    int minOperations(vector<int>& nums) 
    {
        int n = nums.size();

        int count = 0;

        for(int i = 0; i < n - 2; i++)
        {
            if(nums[i] == 0)
            {
                nums[i] = 1;
                nums[i + 1] = flip(nums[i + 1]);
                nums[i + 2] = flip(nums[i + 2]);

                count++;
            }
        }

        for(int num : nums)
            if(num != 1)
                return -1;

        return count;    
    }

    int flip(int num)
    {
        return num ? 0 : 1;
    }
};