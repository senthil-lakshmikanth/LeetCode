class Solution 
{
public:
    int maximumCount(vector<int>& nums) 
    {
        int pos = 0;
        int neg = 0;

        int n = nums.size();

        int left = 0;
        int right = n - 1;

        while(left < n and nums[left] < 0) left++;
        while(right >= 0 and nums[right] > 0) right--;

        pos = n - (right + 1);
        neg = left - 0;

        return max(pos, neg);
    }
};