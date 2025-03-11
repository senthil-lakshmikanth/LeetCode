class Solution 
{
public:
    int evalRPN(vector<string>& tokens) 
    {
        stack <int> nums;

        for(const string& ch : tokens)
        {
            if(ch == "+" || ch == "-" || ch == "*" || ch == "/")
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
            else
            {
                nums.push(stoi(ch)); // str to int
            }
        }
        return nums.top();
    }
};