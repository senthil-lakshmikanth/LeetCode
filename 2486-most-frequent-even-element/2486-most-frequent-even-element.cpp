class Solution 
{
public:
    int mostFrequentEven(vector<int>& nums) 
    {
        unordered_map <int, int> even_count;

        for (const int& num : nums) if (num % 2 == 0) even_count[num]++;

        if(even_count.empty())   return -1;

        int FrequentElement;
        int maxFrequency = -1;

        for(const auto& [num, freq] : even_count)
        {            
            if(freq > maxFrequency || (freq == maxFrequency && num < FrequentElement))
            {
                FrequentElement = num;
                maxFrequency = freq;
            }
        }

        return FrequentElement;
    }
};