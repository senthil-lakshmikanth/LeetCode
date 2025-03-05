class Solution 
{
public:
    long long coloredCells(int n) 
    {
        return (pow((2*n - 1), 2) / 2) + 1; 
    }
};