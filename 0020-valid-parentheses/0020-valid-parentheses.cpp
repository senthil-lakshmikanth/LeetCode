class Solution 
{
public:
    bool isValid(string s) 
    {
        stack <char> bracket;

        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == '(' || s[i] == '[' || s[i] == '{')
            {
                bracket.push(s[i]);
                continue;
            }
            else
            {
                if(s[i] == ')' && !bracket.empty() && bracket.top() == '(')
                {    bracket.pop(); continue;   }
                if(s[i] == ']' && !bracket.empty() && bracket.top() == '[')
                {    bracket.pop(); continue;   }
                if(s[i] == '}' && !bracket.empty() && bracket.top() == '{')
                {    bracket.pop(); continue;   }

                return false;          
            }
        }
        
        return bracket.empty(); // return true; if the stack is empty.
    }
};
