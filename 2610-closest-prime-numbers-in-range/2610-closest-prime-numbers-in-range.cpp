class Solution 
{
public:
    vector<int> closestPrimes(int left, int right) 
    {
        vector <int> result = {-1, -1}; 
        
        int num1 = 0, num2 = 0;
        int minimum = INT_MAX;
        
        for(int i = right; i >= left; i--)
        {
            if(isPrime(i))
            {
                num1 = i;
                if(num2 != 0 && num2 - num1 <= minimum)
                {
                    minimum = num2 - num1;
                    result[0] = num1;
                    result[1] = num2;
                }
                num2 = num1;
            }
        }    

        return result;
    }

    bool isPrime(int n)
    {
        if (n <= 1) return false;
        for(int i = 2; i <= sqrt(n); i++)
        {
            if(n % i == 0)
                return false;
        }
        return true;
    }
};