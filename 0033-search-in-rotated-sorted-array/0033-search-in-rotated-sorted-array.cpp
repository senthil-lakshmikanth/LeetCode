class Solution 
{
public:
    int search(vector<int>& nums, int target) 
    {
        int left = 0;
        int right = nums.size() - 1;

        while(left <= right)
        {
            int mid = (left + right) / 2;

            if(nums[mid] == target) return mid;

            if(nums[mid] >= nums[left]) // Left is sorted
                if(nums[left] <= target && target < nums[mid]) // target is somewhere in between the 'left' sorted range
                    right = mid - 1;
                else
                    left = mid + 1;
            else                        // Right is sorted
                if(nums[mid] < target && target <= nums[right]) // target is somewhere in between the 'right' sorted range
                    left = mid + 1;
                else
                    right = mid - 1;
        }

        return -1;
    }
};