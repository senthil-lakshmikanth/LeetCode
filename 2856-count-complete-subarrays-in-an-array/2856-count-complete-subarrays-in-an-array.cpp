class Solution 
{
public:
    int countCompleteSubarrays(vector<int>& nums) 
    {
        int n = nums.size();
        int distinct_count = unordered_set <int> (nums.begin(), nums.end()).size();

        unordered_map <int, int> freqMap;        
        int count = 0;

        int left = 0;
        for(int right = 0; right < n; right++)
        {
            freqMap[nums[right]]++;

            while(freqMap.size() == distinct_count)
            {
                count += (n - right);

                freqMap[nums[left]]--;
                if(freqMap[nums[left]] == 0)
                    freqMap.erase(nums[left]);
                
                left++;
            }
        }
        return count;
    }
};