class Solution 
{
public:
    vector<int> minCosts(vector<int>& cost) 
    {
        vector <int> cost_to_swap;

        int min_cost = INT_MAX;

        for(const int& pos_cost : cost)
        {
            min_cost = min(pos_cost, min_cost);

            cost_to_swap.push_back(min_cost);
        }
        return cost_to_swap;
    }
};