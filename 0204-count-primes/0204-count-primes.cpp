class Solution 
{
public:
    int countPrimes(int n) 
    {
        vector <bool> Sieve_of_Eratosthenes (n + 1, true);

        Sieve_of_Eratosthenes[0] = false;
        Sieve_of_Eratosthenes[1] = false;

        for(long long num = 2; num <= n; num++)
        {
            if(!Sieve_of_Eratosthenes[num])
                continue;

            for(long long index = num * num; index <= n; index += num)
                Sieve_of_Eratosthenes[index] = false;
        }

        int count = 0;

        for(int i = 2; i < n; i++)
        {
            if(Sieve_of_Eratosthenes[i])
                count++;
        }

        return count;
    }
};