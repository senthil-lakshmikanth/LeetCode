class Solution 
{
public:
    int minOperations(vector<int>& nums, int k) 
    {
        unordered_set <int> freq;

        for(int& num : nums)
        {
            if(num < k) 
                return -1;  
            
            if(num != k)
                freq.insert(num);
        }
        return freq.size();
    }
};