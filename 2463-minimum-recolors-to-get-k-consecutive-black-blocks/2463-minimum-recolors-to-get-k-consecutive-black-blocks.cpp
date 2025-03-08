class Solution 
{
public:
    int minimumRecolors(string blocks, int k) 
    {
        int W = 0;
        
        for(int i = 0; i < k; i++)
        {
            if(blocks[i] == 'W') W++;
        }

        return SlidingWindow(blocks, 0, k - 1, W, W);
    }

    int SlidingWindow(string& blocks, int left, int right, int W, int minimum)
    {
        while(right < blocks.size() - 1)
        {
            if(blocks[left++] == 'W') W--;
            if(blocks[++right] == 'W') W++;

            minimum = min(W, minimum);
        }
        return minimum;
    }
};