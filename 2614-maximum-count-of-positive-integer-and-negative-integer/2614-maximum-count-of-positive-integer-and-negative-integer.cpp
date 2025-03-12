class Solution 
{
public:
    int maximumCount(vector<int>& nums) 
    {
        int n = nums.size();

        int neg = findFirstNonNegative(nums) - 0; // ≥ 0
        int pos = n - findFirstPositive(nums);  // > 0
        
        return max(pos, neg);
    }

    int findFirstNonNegative(vector <int>& nums)
    {
        int left = 0;
        int right = nums.size() - 1;

        while(left <= right)
        {
            int mid = (left + right) / 2;
            if(nums[mid] < 0)
                left = mid + 1;
            else
                right = mid - 1;
        }
        return left;
    }

    int findFirstPositive(vector <int>& nums)
    {
        int left = 0;
        int right = nums.size() - 1;

        while(left <=  right)
        {
            int mid = (left + right) / 2; 
            if(nums[mid] <= 0)
                left = mid + 1;
            else
                right = mid - 1;
        }
        return left;
    }
};