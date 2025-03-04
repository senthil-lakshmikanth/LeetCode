class Solution 
{
public:
    bool checkPowersOfThree(int n) 
    {
        int root = log(n) / log(3);
        return backTrack(0, 0, n, root);
    }

    bool backTrack(int sum, int i, int& n, int& root)
    {
        if(sum == n)
            return true;

        if(i > root)
            return false;

        int power = pow(3, i);
        
        return backTrack(sum + power, i + 1, n, root) || backTrack(sum, i + 1, n, root);
    }
};