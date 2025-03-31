class Solution 
{
public:
    long long putMarbles(vector<int>& weights, int k) 
    {
        if(k == 1) return 0;

        vector <int> splits;

        int n = weights.size();

        for(int i = 1; i < n; i++)
            splits.push_back(weights[i] + weights[i - 1]);

        sort(splits.begin(), splits.end());

        int min = 0;
        int max = 0;

        for(int i = 0; i < k - 1; i++)
            min += splits[i];

        for(int i = 0; i < k - 1; i++)
            max += splits[n - 2 - i];

        return max - min;
    }
};