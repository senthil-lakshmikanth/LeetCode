class Solution 
{
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) 
    {
        int rows = matrix.size();

        for(int i = 0; i < rows; i++)
        {
            int n = matrix[i].size();

            int left = 0;
            int right = n - 1;

            while(left <= right)
            {
                int mid = (left + right) / 2;
                
                if(target < matrix[i][mid])
                    right = mid - 1;
                else
                    if(target > matrix[i][mid])
                        left = mid + 1;
                    else
                        return true;
            }
        }
        return false;
    }
};