class Solution 
{
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) 
    {
        int n = temperatures.size();
        vector <int> result (n, 0);

        stack <int> stack; // store only index

        for(int i = 0; i < n; i++)
        {
            while(!stack.empty() && temperatures[i] > temperatures[stack.top()]) // Access elements by indexing  
            {
                result[stack.top()] = i - stack.top();
                stack.pop();
            }
            stack.push(i);
        }
        return result;
    }
};