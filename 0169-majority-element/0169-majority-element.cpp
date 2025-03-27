class Solution 
{
public:
    int majorityElement(vector<int>& nums) 
    {
        int majorityElement = nums[0];
        int count = 1;

        int n = nums.size();

        for(int i = 1; i < n; i++)
        {
            if(nums[i] == majorityElement)
                count++;
            else
                count--;
            if(count == 0)
            {
                majorityElement = nums[i];
                count++;
            }

        }
        return majorityElement;   
    }
};