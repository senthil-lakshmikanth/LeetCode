class Solution 
{
public:
    bool divideArray(vector<int>& nums) 
    {
        unordered_set <int> count;
        
        int result;
        
        for(int num : nums)
        {
            if(count.find(num) !=  count.end())
            {
                result++;
                count.erase(num);
            }
            else
                count.insert(num);
        }

        return count.empty();
    }
};