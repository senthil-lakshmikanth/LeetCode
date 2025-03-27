class Solution 
{
public:
    int majorityElement(vector<int>& nums) 
    {
        int n = nums.size();
        int majority_element = nums[0];

        unordered_map <int, int> count;

        for(int i = 0; i < n; i++)
        {
            count[nums[i]]++;
            if(count[nums[i]] > count[majority_element])
                majority_element = nums[i];
        }

        return majority_element;
    }
};