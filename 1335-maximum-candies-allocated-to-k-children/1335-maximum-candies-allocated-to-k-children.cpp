class Solution 
{
public:
    int maximumCandies(vector<int>& candies, long long k) 
    {
        int left = 1;
        int right = *max_element(candies.begin(), candies.end());

        while(left <= right)
        {
            int mid = left + (right - left) / 2;
            if(canDistribute(candies, k, mid))
                left = mid + 1; 
            else
                right = mid - 1;
        }   
        return right;
    }

    bool canDistribute(vector<int>& candies, long long k, long long mid)
    {        
        long long sub_pile_count = 0;

        for(int candy : candies)
        {
            sub_pile_count += candy / mid;
        }

        return sub_pile_count >= k;
    }
};