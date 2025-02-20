class Solution 
{
public:
    int missingNumber(vector<int>& nums) 
    {
        int sum_of_numbers = (nums.size() * (nums.size() + 1)) / 2; 
        for(int num : nums)
            sum_of_numbers -= num;
        
        return  sum_of_numbers; 
    }
};