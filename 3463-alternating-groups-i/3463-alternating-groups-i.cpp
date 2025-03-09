class Solution 
{
public:
    int numberOfAlternatingGroups(vector<int>& colors) 
    {
        int count = 0;
        int n = colors.size();
        for(int i = 0; i < n; i++)
        {
            int left = i - 1;
            int right = i + 1;

            if(i == 0) left = n - 1;
            if(i == n - 1) right = 0;

            if(colors[i] == 0)
            {
                if(colors[left] == 1 && colors[right] == 1)
                    count++;
            }
            else
            {
                if(colors[left] == 0 && colors[right] == 0)
                    count++;
            }
        }
        return count;
    }
};