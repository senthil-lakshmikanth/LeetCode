class Solution 
{
public:
    int numberOfAlternatingGroups(vector<int>& colors, int k) 
    {
        int count = 0;
        int n = colors.size();

        int left = 0;

        for(int right = 1; right < n + k - 1; right++)
        {
            if(colors[right % n] == colors[(right - 1) % n])
                left = right;
            
            if((right - left) + 1 > k) left++;
            if((right - left) + 1 == k) count++;
        }

        return count;
    }
};