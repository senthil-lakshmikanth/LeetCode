class Solution 
{
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) 
    {
        unordered_map <int, int> pivot_frequency;

        vector <int> result;

        for(int num : nums)
        {
            if(num < pivot)
                result.push_back(num);
            else
                if(num == pivot)
                    pivot_frequency[pivot]++;
        }

        for(int i = 0; i < pivot_frequency[pivot]; i++)
            result.push_back(pivot);

        for(int num : nums)
        {
            if(num > pivot)
                result.push_back(num);
        }

        return result;
    }
};