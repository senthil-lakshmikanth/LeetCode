class Solution 
{
public:
    vector<string> generateParenthesis(int n) 
    {
        vector <string> result;

        construct(0, 0, n, "", result);

        return result;
    }

    void construct(int open, int close, int& n, string combinations, vector <string>& result)
    {
        if(open < n)
            construct(open + 1, close, n, combinations + '(', result);

        if(close < open)
            construct(open, close + 1, n, combinations + ')', result);

        if(open == n && close == n) // open == close == n
            result.push_back(combinations);
    }
};