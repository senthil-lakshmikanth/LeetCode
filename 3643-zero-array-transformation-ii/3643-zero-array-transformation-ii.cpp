class Solution 
{
public:
    int minZeroArray(vector<int>& nums, vector<vector<int>>& queries) 
    {
        int left = 0;
        int right = queries.size();

        if(!canTransform(nums, queries, right)) return -1;

        while(left < right)
        {
            int mid = left + (right - left) / 2;
            if(canTransform(nums, queries, mid))
                right = mid;
            else
                left = mid + 1;
        }
        return left;
    }

    bool canTransform(vector<int>& nums, vector<vector<int>>& queries, int mid)
    {
        int n = nums.size();
        vector <int> difference_array (n + 1, 0);

        for(int k = 0; k < mid; k++)
        {
            int left = queries[k][0];
            int right = queries[k][1];
            int val = queries[k][2];

            difference_array[left] += val;
            if(right + 1 < n)
                difference_array[right + 1] -= val;
        }

        int prefix_sum = 0;
        for(int i = 0; i < n; i++)
        {
            prefix_sum += difference_array[i];
            if(prefix_sum < nums[i])
                return false;
        }
        return true;
    }
};