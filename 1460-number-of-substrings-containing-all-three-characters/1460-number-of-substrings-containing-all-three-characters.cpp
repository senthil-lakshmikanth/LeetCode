class Solution 
{
public:
    int numberOfSubstrings(string s) 
    {
        int n = s.size();
        unordered_map <char, int> characters;

        int count = 0;

        int left = 0;        
        for(int right = 0; right < n; right++)
        {
            if(s[right] == 'a' || s[right] == 'b' || s[right] == 'c')
            {
                characters[s[right]]++;
            }

            while(characters.size() == 3)
            {
                count += (n - right);

                characters[s[left]]--;
                if(characters[s[left]] == 0)
                    characters.erase(s[left]);

                left++;
            }
        }
        return count;
    }
};