class Solution 
{
public:
    int numberOfSubstrings(string s) 
    {
        int n = s.size();
        int characters [3] = {0, 0, 0};

        int count = 0;

        int left = 0;        
        for(int right = 0; right < n; right++)
        {
            if(s[right] == 'a' || s[right] == 'b' || s[right] == 'c')
            {
                characters[(s[right] - 'a')]++;
            }

            while(characters[0] and characters[1] and characters[2])
            {
                count += (n - right);

                characters[s[left++] - 'a']--;
            }
        }
        return count;
    }
};