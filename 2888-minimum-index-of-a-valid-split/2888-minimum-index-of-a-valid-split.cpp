class Solution 
{
public:
    int minimumIndex(vector<int>& nums) 
    {
        int majorityElement;
        int count = 0;
        for(const int& num : nums)
        {
            if(count == 0)
                majorityElement = num;
            
            count += (majorityElement == num) ? 1 : -1;
        }

        int majorityLeftcount = 0;
        int majorityRightcount = 0;
        for(const int& num : nums)
        {
            if(num == majorityElement)
                majorityRightcount++;
        }


        int n  = nums.size();

        for(int index = 0; index < n; index++)
        {
            if(nums[index] == majorityElement)
            {
                majorityRightcount--;
                majorityLeftcount++;

                int left_length = (index + 1); // (i + 1) - 0
                int right_length = (n - 1) - index;

                if(majorityLeftcount > left_length / 2 && majorityRightcount > right_length / 2)
                    return index;
            }
        }
        return -1;
    }
};