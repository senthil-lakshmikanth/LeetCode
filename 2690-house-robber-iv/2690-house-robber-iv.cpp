class Solution 
{
public:
    int minCapability(vector<int>& nums, int k) 
    {
        int left = *min_element(nums.begin(), nums.end());
        int right = *max_element(nums.begin(), nums.end());

        while(left <= right)
        {
            int mid = left + (right - left) / 2;
            if(canRob(nums, k, mid))
                right = mid - 1;
            else
                left = mid + 1;
        }
        return left;
    }

    bool canRob(vector<int>& nums, int k, int minimum_capability)
    {
        int n = nums.size();
        int count = 0;

        for(int i = 0; i < n; i++)
        {
            if(nums[i] <= minimum_capability)
            {
                count++;
                i++;
            }
        }

        return count >= k;
    }
};