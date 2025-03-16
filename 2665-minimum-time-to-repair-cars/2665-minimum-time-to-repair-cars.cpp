class Solution 
{
public:
    long long repairCars(vector<int>& ranks, int cars) 
    {
        long long left = 1;
        long long right = (long long) ranks[0] * cars * cars;

        while(left <= right)
        {
            long long mid = left + (right - left) / 2;
            if(canRepair(ranks, cars, mid)) // in ____ minutes ?
                right = mid - 1;
            else
                left = mid + 1;
        }
        return left;
    }

    bool canRepair(vector<int>& ranks, int cars, long long time)
    {
        int cars_count = 0;

        for(int r : ranks)
        {
            int n = sqrt(time / r); // r * n^2 = time
            cars_count += n;

            if(cars_count >= cars) 
                break;
        }

        return cars_count >= cars;
    }
};