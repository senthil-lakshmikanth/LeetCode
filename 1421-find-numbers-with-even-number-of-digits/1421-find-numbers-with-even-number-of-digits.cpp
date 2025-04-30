class Solution 
{
public:
    int findNumbers(vector<int>& nums) 
    {
        int count = 0;

        for(int& num : nums)
        {
            int digit_count = 0;
            while(num != 0)
            {
                digit_count++;
                num /= 10;
            }
            
            if(digit_count % 2 == 0)
                count++;
        }
        return count;
    }
};