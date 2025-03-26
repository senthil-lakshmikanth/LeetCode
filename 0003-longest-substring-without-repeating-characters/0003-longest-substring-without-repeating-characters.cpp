class Solution 
{
public:
    int lengthOfLongestSubstring(string s) 
    {
        unordered_set <char> substr;

        int size = s.size();
        int length = 0;

        int left = 0;
        for(int right = 0; right < size; right++)
        {
            while(substr.find(s[right]) != substr.end())
            {
                substr.erase(s[left]);
                left++;
            }
            substr.insert(s[right]);
            length = max((right - left) + 1, length);
        }
        return length;    
    }
};