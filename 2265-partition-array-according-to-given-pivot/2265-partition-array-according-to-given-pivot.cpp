class Solution 
{
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) 
    {
        int pivot_frequency = 0;

        vector <int> result;

        for(const int& num : nums)
        {
            if(num < pivot)
                result.push_back(num);
            else
                if(num == pivot)
                    pivot_frequency++;
        }

        while(pivot_frequency)
        {
            result.push_back(pivot);
            pivot_frequency--;
        }

        for(const int& num : nums)
        {
            if(num > pivot)
                result.push_back(num);
        }

        return result;
    }
};