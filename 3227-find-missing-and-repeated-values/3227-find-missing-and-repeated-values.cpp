class Solution 
{
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) 
    {

        int n = grid.size();
        int total_elements = n * n;

        unordered_set <int> distinct;
        int current_sum = 0;

        int repeating;

        for(int i = 0; i < n; i++)
        {
            for(auto& num : grid[i])
            {
                if(distinct.find(num) == distinct.end())
                {
                    distinct.insert(num);
                    current_sum += num;
                }
                else
                    repeating = num;
            }
        }

        int total_sum = total_elements * (total_elements + 1) / 2;
        int missing = total_sum - current_sum;
        return {repeating, missing};
    }
};