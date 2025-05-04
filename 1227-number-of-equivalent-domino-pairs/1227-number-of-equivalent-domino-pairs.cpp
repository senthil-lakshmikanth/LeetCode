class Solution 
{
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) 
    {
        unordered_map <pair<int, int>, int, hash_pair> domino_freq;

        for(auto domino : dominoes)
        {
            pair<int, int> key = {domino[0], domino[1]};
            if(domino_freq.find(key) == domino_freq.end())
                swap(domino[0], domino[1]);

            domino_freq[{domino[0], domino[1]}]++;
        }

        int count = 0;

        for(auto freq : domino_freq)
        {
            int n = freq.second;
            if(n > 1)
                count += (n * (n - 1)) / 2; // nC2
        }

        return count;
    }

    // Custom hash function for pair<int, int>
    struct hash_pair {
        size_t operator()(const pair<int, int>& p) const {
            return hash<int>()(p.first) ^ (hash<int>()(p.second) << 1);
        }
    };

};