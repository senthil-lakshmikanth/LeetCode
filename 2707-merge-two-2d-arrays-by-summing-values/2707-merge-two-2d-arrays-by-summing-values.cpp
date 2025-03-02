class Solution 
{
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) 
    {
            map <int, int> id_sum;
            for(auto i : nums1)
            {
                id_sum[i[0]] += i[1]; 
            }
            for(auto i : nums2)
            {
                id_sum[i[0]] += i[1]; 
            }

            vector <vector <int>> nums;
            for(auto i : id_sum)
            {
                nums.push_back({i.first, i.second});
            }
            return nums;
    }
};