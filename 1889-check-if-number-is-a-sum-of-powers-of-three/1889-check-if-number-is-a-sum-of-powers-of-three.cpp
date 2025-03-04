class Solution 
{
public:
    bool checkPowersOfThree(int n) 
    {
        int root = pow(n, 0.3);
        return backTrack(0, 0, n);
    }

    bool backTrack(int sum, int i, int& n)
    {
        if(sum == n)
            return true;

        if(sum > n || pow(3, i) > n)
            return false;

        int power = pow(3, i);
        
        return backTrack(sum + power, i + 1, n) || backTrack(sum, i + 1, n);
    }
};