class Solution 
{
public:
    int search(vector<int>& nums, int target) 
    {
        int left = 0;
        int right = nums.size() - 1;

        while(left <= right)
        {
            int mid = (left +  right) / 2; // mid = left + ((right - left) / 2) To avoid integer overflow. Refer Notes.      
            if(target < nums[mid])
                right = mid - 1;
            else
                if(target > nums[mid])
                    left = mid + 1;
                else            
                    return mid;
        }
        return -1;
    }
};