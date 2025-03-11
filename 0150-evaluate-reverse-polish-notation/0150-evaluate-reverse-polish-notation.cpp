class Solution 
{
public:

    stack <int> nums;

    int evalRPN(vector<string>& tokens) 
    {
        for(const string& ch : tokens)
        {
            if(ch == "+") { do_Ops('+'); continue; }
            if(ch == "-") { do_Ops('-'); continue; }
            if(ch == "*") { do_Ops('*'); continue; }
            if(ch == "/") { do_Ops('/'); continue; }

            nums.push(stoi(ch));
        }

        return nums.top();
    }

    void do_Ops(char ch)
    {
        int a = nums.top(); nums.pop();
        int b = nums.top(); nums.pop();

        switch(ch)
        {
            case '+' : nums.push(b + a); break;
            case '-' : nums.push(b - a); break;
            case '*' : nums.push(b * a); break;
            case '/' : nums.push(b / a); break;
        }
    }
};