class Solution 
{
public:
    int countLargestGroup(int n) 
    {
        unordered_map <int, int> groups;

        for(int i = 1; i <= n; i++)
        {
            groups[digitSum(i)]++;
        }

        int largest = 0;

        for(auto size : groups)
        {
            largest = max(size.second, largest);
        }

        int count = 0;

        for(auto size : groups)
        {
            if(size.second == largest)
                count++;
        }        

        return count;
    }

    int digitSum(int num)
    {
        int sum = 0;
        
        while(num != 0)
        {
            sum += num % 10;
            num /= 10;
        }
        return sum;
    }
};