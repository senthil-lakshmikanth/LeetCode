class Solution 
{
public:
    bool isPalindrome(string s) 
    {
        int left = 0;
        int right = s.size() - 1;

        while(left < right)
        {
            while(!isalphaNum(s[left]) && left < right) left++;  
            while(!isalphaNum(s[right]) && left < right) right--; 

            if(tolower(s[left]) == tolower(s[right]))
            {
                left++;
                right--;
            }
            else
                return false;
        }

        return true;
    }

    bool isalphaNum(char c)
    {
        return 
        ( c >= 'A' && c <= 'Z' ||
          c >= 'a' && c <= 'z' ||
          c >= '0' && c <= '9' );
    }
};
