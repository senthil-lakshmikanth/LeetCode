class Solution 
{
public:
    vector<int> productExceptSelf(vector<int>& nums) 
    {
        int size = nums.size();

        vector <int> prefix (size, 1);
        prefix[0] = nums[0]; // prefix[0] = 1 * nums[0];
        for(int i = 1; i < size; i++)
        {
            prefix[i] = prefix[i - 1] * nums[i];
        }

        vector <int> postfix (size, 1);
        postfix[size - 1] = nums[size - 1]; // postfix[size - 1] = nums[size - 1] * 1;
        for(int i = size - 1 - 1; i >=0; i--)
        {
            postfix[i] = postfix[i + 1] * nums[i]; // Note ! it is postfix[i + 1] !!!

        }

        vector <int> result (size);
        result[0] = postfix[0 + 1]; // result[0] = 1 * postfix[0 + 1];
        for(int i = 1; i < size - 1; i++)
        {
            result[i] = prefix[i - 1] * postfix[i + 1];
        }
        result[size - 1] = prefix[size - 1 - 1]; // result[size - 1] = prefix[size - 1 - 1] * 1;

        return result;
    }
};
