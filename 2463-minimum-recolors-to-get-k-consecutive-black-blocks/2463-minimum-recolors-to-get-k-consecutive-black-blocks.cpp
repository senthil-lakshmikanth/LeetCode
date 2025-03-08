class Solution 
{
public:
    int minimumRecolors(string blocks, int k) 
    {
        int W = 0;
        for(int i = 0; i < k; i++) //  Traversing through the First Window.
        {
            if(blocks[i] == 'W') W++;
        }

        int minimum = W;

        int left = 0;
        int right = k - 1;
        
        while(right < blocks.size() - 1) // Slide the Window...
        {
            left++;
            right++;

            if(blocks[left - 1] == 'W') W--;
            if(blocks[right] == 'W') W++;

            if(W < minimum) minimum = W;
        }

        return minimum;
    }
};