class Solution 
{
public:
    string findDifferentBinaryString(vector<string>& nums) 
    {
        int num_size = nums.size();
        string output = "";

        for(int index = 0; index < num_size; index++)
        {
            if(nums[index][index] == '0')
                output += '1';
            else
                output += '0'; 
        }

        return output;
    }
};