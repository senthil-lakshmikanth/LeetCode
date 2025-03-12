class Solution 
{
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) 
    {
        int n = temperatures.size();
        vector <int> result (n, 0);

        stack <pair <int, int>> stack; // pair : {temp, index}

        for(int i = 0; i < n; i++)
        {
            while(!stack.empty() && temperatures[i] > stack.top().first)
            {
                auto pair = stack.top();
                result[pair.second] = i - pair.second;
                stack.pop();
            }
            stack.push({temperatures[i], i});
        }
        return result;
    }
};