class Solution 
{
public:
    vector<int> minCosts(vector<int>& cost) 
    {
        int n = cost.size();

        vector <int> cost_to_swap(n);

        int min_cost = INT_MAX;

        for(int pos = 0; pos < n; pos++)
        {
            min_cost = min(cost[pos], min_cost);
            
            cost_to_swap[pos] = min_cost;
        }
        return cost_to_swap;
    }
};