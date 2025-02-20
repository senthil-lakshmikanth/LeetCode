class Solution 
{
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        unordered_map <int, int> hashed_map;

        for(int i = 0; i < nums.size(); i++)
        {
            if(hashed_map.find(target - nums[i]) != hashed_map.end())
                return { i, hashed_map[target - nums[i]] };
            hashed_map[nums[i]] = i;
        }
        
        return nums;
    }
};
