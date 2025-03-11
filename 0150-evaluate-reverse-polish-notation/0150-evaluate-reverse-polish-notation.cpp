class Solution 
{
public:
    int evalRPN(vector<string>& tokens) 
    {
        stack <int> nums;

        for(const string& ch : tokens)
        {
            if(ch.size() > 1 || isdigit(ch[0])) // Handling edge cases (negative numbers, multi-digit numbers)
            {
                nums.push(stoi(ch)); // str to int
            }
            else
            {
                int a = nums.top(); nums.pop();
                int b = nums.top(); nums.pop();

                switch(ch[0]) // str to char
                {
                    case '+' : nums.push(b + a); break;
                    case '-' : nums.push(b - a); break;
                    case '*' : nums.push(b * a); break;
                    case '/' : nums.push(b / a); break;
                }
            }
        }
        return nums.top();
    }
};