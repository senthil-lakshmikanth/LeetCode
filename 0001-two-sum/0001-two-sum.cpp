class Solution 
{
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        unordered_map <int, int> hashed_num;

        for(int i = 0; i < nums.size(); i++)
            hashed_num[nums[i]] = i;

        for(int i = 0; i < nums.size(); i++)
        {
            if(hashed_num.find(target - nums[i]) != hashed_num.end() and i != hashed_num[target - nums[i]])
            {
                return { i, hashed_num[target - nums[i]] };
            } 
        }

        return nums;
    }
};