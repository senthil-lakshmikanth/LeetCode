class Solution 
{
public:
    int longestConsecutive(vector<int>& nums) 
    {
        unordered_set <int> lookup (nums.begin(), nums.end());

        int largest = 0;

        for(int num : lookup)
        {
            if(lookup.find(num - 1) == lookup.end()) // If there is no element less than 'num', then 'num' is the starting element.
            {
                int count = 1;
                while(lookup.find(num + count) != lookup.end())
                {
                    count++;
                }
                largest = max(largest, count);
            }
        }

        return largest;
    }
};