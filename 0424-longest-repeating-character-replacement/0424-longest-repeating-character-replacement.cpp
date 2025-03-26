class Solution 
{
public:
    int characterReplacement(string s, int k) 
    {
        unordered_map <char, int> char_count;
        int max_frequency = 0;

        int str_length = s.size();
        int substr_length = 0;

        int left = 0;
        for(int right = 0; right < str_length; right++)
        {
            char_count[s[right]]++;
            max_frequency = max(char_count[s[right]], max_frequency); // Top K Frequent Element.

            while(((right - left) + 1) - max_frequency > k) // Length - Most Repeating Element = No. of Replacing elements
            {
                char_count[s[left]]--;  
                left++;
                            /* We need not to reduce max_frequency, as our goal is to find the 'longest' sub-string,
                               to find a much longer sub-string, the count of any character must be greater than max_frequency. */
            }
            substr_length = max((right - left) + 1, substr_length);
        }
        return substr_length;
    }
};