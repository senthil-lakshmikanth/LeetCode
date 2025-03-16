class Solution 
{
public:
    int minEatingSpeed(vector<int>& piles, int h) 
    {
        int left = 1;
        int right = *max_element(piles.begin(), piles.end());

        while(left <= right)
        {
            int mid = left + (right - left) / 2;

            if(can_eat_all(piles, h, mid))
                right = mid - 1;
            else
                left = mid + 1;
        }
        return left;
    }

    bool can_eat_all(vector<int>& piles, int hours, int per_hour)
    {
        long long time = 0;

        for(int bananas : piles)
        {
            time += bananas / per_hour;

            if(bananas % per_hour != 0)
                time++;
        }

        return time <= hours;
    }
};