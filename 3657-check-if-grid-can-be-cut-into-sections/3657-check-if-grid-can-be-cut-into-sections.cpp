class Solution 
{
public:
    bool checkValidCuts(int n, vector<vector<int>>& rectangles) 
    {
        vector <vector <int>> x; // Interval (or) Length of each side along x-axis 
        vector <vector <int>> y; // Interval (or) Length of each side along y-axis

        for(auto coordinates : rectangles)
        {
            x.push_back({coordinates[0], coordinates[2]}); // pair : (startx, endx)
            y.push_back({coordinates[1], coordinates[3]}); // {starty, endy}
        }

        sort(x.begin(), x.end());
        sort(y.begin(), y.end());

        return max(isOverlapping(x), isOverlapping(y));
    }

    bool isOverlapping(vector <vector <int>> number_line)
    {
        int prevEnd = 0;
        int count = 0;

        for(auto edges : number_line)
        {
            int start = edges[0];
            int end = edges[1];

            if(start >= prevEnd) // It does not over lap.
                count++;

            prevEnd = max(prevEnd, end);
        }
        return count >= 3; /* count >= 3 because, in 1st iteration, 0th coordinate is always counted as 1 cut. 
                              So we need 2 more cuts to have 3 partition. */
    }
};