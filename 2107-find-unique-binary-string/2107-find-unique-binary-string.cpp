class Solution 
{
public:
    string findDifferentBinaryString(vector<string>& nums) 
    {
        int num_size = nums.size();

        unordered_set <string> nums_set (nums.begin(), nums.end());
        
        return sequence(nums_set, num_size, "");
    }

    string sequence(unordered_set <string>& nums_set, int num_size, string num)
    {
        if(num.size() == num_size)
        {
            if(nums_set.find(num) == nums_set.end())
                return num;
            else
                return "";
        }
        
        for(auto binary : {'0', '1'})
        {
            string output = sequence(nums_set, num_size, num + binary);
            if(!output.empty())
                return output;
        }
        return "";
    }
};