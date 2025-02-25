class Solution 
{
public:
    int numOfSubarrays(vector<int>& arr) 
    {
        int prefix_sum = 0;
        int odd_count = 0;
        int even_count = 1;
        int result = 0;

        int modulo = 1e9 + 7;

        for(int num : arr)
        {
            prefix_sum += num;
            if(prefix_sum % 2 == 1)
            {
                result = result + even_count;
                odd_count++;
            }
            else
            {
                result = result + odd_count;
                even_count++;
            }
            result = result % modulo;
        }
        return result;
    }
};