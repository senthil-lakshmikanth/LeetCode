class Solution 
{
public:
    int missingNumber(vector<int>& nums) 
    {
        int size = nums.size();
        unordered_set <int> nums_set (nums.begin(), nums.end());

        for(int i = 0; i <= size; i++)
            if(nums_set.find(i) == nums_set.end())
                return i;
        return 0;
    }
};