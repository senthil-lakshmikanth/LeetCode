class Solution 
{
public:
    long long countOfSubstrings(string word, int k) 
    {
        return atleastK(word, k) - atleastK(word, k + 1);
    }

    long long atleastK(string& word, int k)
    {
        unordered_map <char, int> vowel;
        int consonant = 0;
        long long count = 0;

        int n = word.size();
        int left = 0;
        for(int right = 0; right < n; right++)
        {
            if(isVowel(word[right]))
                vowel[word[right]]++;
            else
                consonant++;

            while(vowel.size() == 5 && consonant >= k) 
            {
                count += n - right;

                if(isVowel(word[left]))
                {
                    vowel[word[left]]--;
                    if(vowel[word[left]] == 0)
                        vowel.erase(word[left]);
                }
                else
                    consonant--;

                left++;
            }
        }
        return count;
    }

    bool isVowel(char& c)
    {
        return c == 'a' || c == 'e' || c =='i' || c == 'o' || c == 'u';
    }
};
