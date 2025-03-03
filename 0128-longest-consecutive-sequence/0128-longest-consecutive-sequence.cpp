class Solution 
{
public:
    int longestConsecutive(vector<int>& nums) 
    {
        set <int> lookup (nums.begin(), nums.end());

        int count = 1;
        int largest = 0;;
        for(auto& num : lookup)
        {
            if(lookup.find(num + 1) != lookup.end())
                count++;
            else
                count = 1;
            if(count > largest) largest = count;
        }

        return largest;
    }
};