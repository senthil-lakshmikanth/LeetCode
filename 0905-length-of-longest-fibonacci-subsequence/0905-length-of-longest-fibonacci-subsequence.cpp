class Solution 
{
public:
    int lenLongestFibSubseq(vector<int>& arr) 
    {
        set <int> fibonacci (arr.begin(), arr.end());;

        int result = 0;

        for(int i = 0; i < arr.size() - 1; i++)
        {
            for(int j = i + 1; j < arr.size(); j++)
            {
                int prev = arr[i];
                int curr = arr[j];
                int next = prev + curr;

                int length = 2;

                while(fibonacci.find(next) != fibonacci.end())
                {
                    length += 1;

                    prev = curr;
                    curr = next;
                    next = prev + curr;

                    if(length > result) result = length;
                }                
            }
        }
        return result;
    }
};