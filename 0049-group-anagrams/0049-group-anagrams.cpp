class Solution 
{
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) 
    {

        unordered_map <string , vector<string>> groupAnagrams;

        for(auto word : strs)
        {
            vector <int> frequency (26, 0);
            for(auto chr: word)
                frequency[chr - 'a']++;

            string hash_key = "";
            for(int count : frequency)
                hash_key += to_string(count) + "#";
                
            // we use "#" to reduce the risk of ambiguity :
            // [2,2,10,0,0,...] → "221000000..." 
            // [22,1,0,0,0,...] → "221000000..."

            groupAnagrams[hash_key].push_back(word);
        }

        vector <vector<string>> result;
        for(auto group : groupAnagrams)
            result.push_back(group.second);

        return result;
    }
};
