class Solution 
{
public:
    string getHappyString(int n, int k) 
    {
        if(k > 3 * pow(2, (n-1))) 
            return "";

        vector <string> order;
        all_sequences(n, "", order);

        return order[k-1];       
    }

    void all_sequences(int n, string current, vector <string>& order)
    {
        if(current.size() == n) 
        { 
            order.push_back(current); 
            return; 
        }

        for(char ch : {'a', 'b', 'c'})
            if(current.empty() || current.back() != ch)
                all_sequences(n, current + ch, order);
    }
};