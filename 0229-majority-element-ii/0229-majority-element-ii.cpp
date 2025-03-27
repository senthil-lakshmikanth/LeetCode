class Solution 
{
public:
    vector<int> majorityElement(vector<int>& nums) 
    {
        int candidate1, count1 = 0;
        int candidate2, count2 = 0;

        for(const int& num : nums)
        {
                    if(candidate1 == num)   count1++;
            else    if(candidate2 == num)   count2++;
            else    if(count1 == 0)         candidate1 = num,  count1++;
            else    if(count2 == 0)         candidate2 = num,  count2++;
            else    count1--,   count2--;
        }    

        count1 = count2 = 0;

        count1 = count(nums.begin(), nums.end(), candidate1);
        count2 = count(nums.begin(), nums.end(), candidate2);

        int n = nums.size();          vector <int> result;
        
        if(count1 > n / 3)   result.push_back(candidate1);
        if(count2 > n / 3)   result.push_back(candidate2);

        return result;
    }
};