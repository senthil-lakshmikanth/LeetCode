class Solution 
{
public:
    vector<int> productExceptSelf(vector<int>& nums) 
    {
        int size = nums.size();

        vector <int> prefix (size, 1);
        for(int i = 1; i < size; i++)
        {
            prefix[i] = prefix[i - 1] * nums[i - 1];
        }

        vector <int> postfix (size, 1);
        for(int i = size - 1 - 1; i >=0; i--)
        {
           postfix[i] = postfix[i + 1] * nums[i + 1];
        }

        vector <int> result (size);
        for(int i = 0; i < size; i++)
        {
            result[i] = prefix[i] * postfix[i];
        }

        return result;
    }
};
