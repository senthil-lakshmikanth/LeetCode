class Solution 
{
public:
    int maxAbsoluteSum(vector<int>& nums) 
    {
        int smallest = 0, largest = 0, prefix_sum = 0, absolute_result = 0;
        for(int n : nums)
        {
            prefix_sum += n;
            if(prefix_sum > largest) 
            {
                largest = prefix_sum;
                absolute_result = abs(prefix_sum - smallest);
            }
            if(prefix_sum < smallest)
            {
                smallest = prefix_sum;
                absolute_result = abs(prefix_sum - largest);
            } 
        }
        return absolute_result;
    }
};