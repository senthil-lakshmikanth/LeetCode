class Solution 
{
public:

    string encode(vector<string>& strs) 
    {
        string s;
        for(auto word : strs)
        {
            s += to_string(word.size()) + "#" + word;
        }
        return s;
    }

    vector<string> decode(string s) 
    {
        vector <string> result;
        int i = 0;
        while(i < s.size())
        {
            int length = 0;
            while (i < s.size() && s[i] != '#')
            {
                length = length * 10 + (s[i] - '0');
                i++;
            }

            i++; // skipping the delimiter '#'

            string word;
            while(length)
            {
                word += s[i++];
                length--;
            }
            result.push_back(word);
        }
        return result;
    }
};
