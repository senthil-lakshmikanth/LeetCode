class Solution 
{
public:
    int minimumIndex(vector<int>& nums) 
    {
        unordered_map <int, int> left, right;
        int n = nums.size();

        for(const int& num : nums)
            right[num]++;

        for(int index = 0; index < n; index++)
        {
            int num = nums[index];

            right[num]--;
            left[num]++;

            int left_length = (index + 1) - 0;
            int right_length = (n - 1) - index;

            if(left[num] > left_length / 2 && right[num] > right_length / 2)
                return index;
        }
        return -1;
    }
};