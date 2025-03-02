class Solution 
{
public:
    vector<int> topKFrequent(vector<int>& nums, int k) 
    {
        unordered_map <int, int> frequency;
        for(int& num : nums)
        {
            frequency[num]++;
        }

        vector <vector <int>> bucket (nums.size() + 1);        
        for(auto& pair : frequency)
        {
            bucket[pair.second].push_back(pair.first);
        }

        vector <int> result;
        for(int freq_count = bucket.size() - 1; freq_count >= 0; freq_count--)
        {
            if(!bucket[freq_count].empty())
            {
                for(int& num : bucket[freq_count])
                {
                    result.push_back(num);
                    if(result.size() == k) 
                        return result;
                }
            }
        }
        return result;
    }
};