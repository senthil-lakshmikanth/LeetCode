class Solution 
{
public:
    vector<int> partitionLabels(string s) 
    {
        int n = s.size();

        unordered_map <char, int> last_index;

        for(int i = n - 1; i >= 0; i--)
        {
            if(!last_index.count(s[i]))
            {
                last_index[s[i]] = i;
            }
        }

        vector <int> result;

        int start = 0;
        int end = 0;

        for(int i = 0; i < n; i++)
        {
            end = max(last_index[s[i]], end);
            if(i == end)
            {
                result.push_back((end - start) + 1);
                start = end + 1;
            }
        }
        return result;
    }
};