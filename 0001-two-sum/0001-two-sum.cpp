class Solution 
{
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        unordered_map <int, int> hashed_num;

        for(int i = 0; i < nums.size(); i++)
            hashed_num[nums[i]] = i;

        vector <int> output;

        for(int i = 0; i < nums.size(); i++)
        {
            if(hashed_num.find(target - nums[i]) != hashed_num.end() and i != hashed_num[target - nums[i]])
            {
                output.push_back(i);
                output.push_back(hashed_num[target - nums[i]]);
                break;
            } 
        }

        return output;
    }
};