class Solution 
{
public:
    bool isValid(string s) 
    {
        stack <char> brackets;

        unordered_map <char, char> pair = {{')', '('}, {']', '['}, {'}', '{'}};

        for(char c : s)
        {
            if(pair.count(c))
            {
                if(brackets.empty() || brackets.top() != pair[c])
                    return false;
                
                brackets.pop();
            }
            else
            {
                brackets.push(c);
            }
        }
        
        return brackets.empty(); // return true; if the stack is empty.
    }
};
