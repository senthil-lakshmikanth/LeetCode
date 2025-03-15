class Solution 
{
public:
    vector<vector<int>> threeSum(vector<int>& nums) 
    {
        int n = nums.size();
        sort(nums.begin(), nums.end());

        vector <vector <int>> result;

        for(int i = 0; i < n; i++)
        {
            if(i > 0 and nums[i] == nums[i - 1]) // Skip the element if it is the same of previous element (duplciate).
                continue;
            
            int left = i + 1;
            int right = n - 1;

            while(left < right)
            {
                int target = nums[i] + nums[left] + nums[right];
                if(target < 0) { left++; continue; }
                if(target > 0) { right--; continue; }
                if(target == 0)
                {
                    result.push_back({nums[i], nums[left], nums[right]});
                    
                    // Skip forward duplicate elements.
                    while(left < right && nums[left] == nums[left + 1]) left++; 
                    while(left < right && nums[right] == nums[right - 1]) right--;

                    left++;
                    right--;
                }
            }
        }
        return result;
    }
};