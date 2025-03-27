class Solution 
{
public:
    int majorityElement(vector<int>& nums) 
    {
        int majorityElement;
        int count = 0;

        for(const int& num : nums)
        {
            if(count == 0)
                majorityElement = num;
            
            count += (majorityElement == num) ? 1 : -1; 
/* 
            if(majorityElement == num)
                count++;
            else
                count--;            
*/      }
        return majorityElement;   
    }
};