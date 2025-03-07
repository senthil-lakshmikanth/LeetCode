class Solution 
{
public:
    vector<int> closestPrimes(int left, int right) 
    {        
        vector <bool> isPrime (right + 1, true);
        SieveofEratosthenes(isPrime);

        vector <int> prime;
        for(int i = left; i <= right; i++)
            if(isPrime[i])
                prime.push_back(i);
        
        int minimum = INT_MAX;
        int num1 = -1, num2 = -1;

        int n = prime.size(); // Writing like this is a good practise. Read Note.
        for(int i = 0; i < n - 1; i++)
        {
            if(prime[i + 1] - prime[i] < minimum)
            {
                minimum = prime[i + 1] - prime[i];
                num1 = prime[i];
                num2 = prime[i + 1];
            }
        }
        return {num1, num2};
    }

    void SieveofEratosthenes (vector <bool>& isPrime)
    {
        isPrime[0] = false;
        isPrime[1] = false;

        int n = isPrime.size();
        
        for(int i = 2; i * i < n; i++) // i < sqrt(n)
        {
            if(isPrime[i])
            {
                for(int j = i * i ; j < n; j += i) // j = i * i 
                    isPrime[j] = false;
            }   
            /* 
            Inner loop : j = i * i and not j = (i + i) or j = (i * 2) because,
               consider 7 x 2 = 14 
                        7 x 3 = 21 
                        7 x 4 = 28 
                        7 x 5 = 35
                        7 x 6 = 42 
                were already marked 'false' by 2, 3, 4, 5 and 6 except for 49 which is 7 itself */
        }
    }
};