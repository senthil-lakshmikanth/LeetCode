class Solution 
{
public:
    int longestNiceSubarray(vector<int>& nums) 
    {
        int n = nums.size();

        int prefix_sum = 0;

        int longest = 0;

        int left = 0;
        for(int right = 0; right < n; right++)
        {
            while((prefix_sum & nums[right]) != 0)
            {
                prefix_sum ^= nums[left]; // bitwise XOR, subtracting the left most element.
                left++;
            }
            prefix_sum |= nums[right]; // bitwise OR

            int length = right - left + 1;
            longest = max(longest, length);
        }
        return longest;
    }
};