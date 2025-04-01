class Solution 
{
public:
    vector <long long> cache;

    long long mostPoints(vector<vector<int>>& questions) 
    {
        cache.assign(questions.size(), 0);

        return Memoization(0, questions);    
    }

    long long Memoization(int i, vector<vector<int>>& questions)
    {
        if(i >= questions.size())
            return 0;

        if(cache[i])
            return cache[i];

        int points = questions[i][0];
        int brain_power = questions[i][1];

        long long skip = Memoization(i + 1, questions);
        long long solve = points + Memoization(i + brain_power + 1, questions);

        return cache[i] = max(skip, solve);
    }
};