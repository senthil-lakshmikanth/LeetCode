class Solution 
{
public:
    int minOperations(vector<vector<int>>& grid, int x) 
    {
        int m = grid.size();
        int n = grid[0].size();

        vector <int> nums;
        int remainder = grid[0][0] % x;

        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(grid[i][j] % x != remainder)
                    return -1;
                nums.push_back(grid[i][j]);
            }
        }

        sort(nums.begin(), nums.end());

        int median = nums[m * n / 2];

        int count = 0;

        for(const int& num : nums)
        {
            count += abs(median - num) / x;
        }

        return count;

    }
};