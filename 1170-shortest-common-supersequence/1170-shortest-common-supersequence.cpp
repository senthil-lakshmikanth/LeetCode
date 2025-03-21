class Solution 
{
public:

    string str1, str2;
    int m, n;
    vector <vector <int> > dp;

    void LargestCommonSubsequence(int i, int j)
    {
        for(int i = m - 1; i >= 0; i--)
        {
            for(int j = n - 1; j >= 0; j--)
            {
                if(str1[i] == str2[j])
                    dp[i][j] = 1 + dp[i+1][j+1];
                else
                    dp[i][j] = max(dp[i][j+1], dp[i+1][j]);
            }
        }
    }

    string shortestCommonSupersequence(string text1, string text2) 
    {
        str1 = text1;
        str2 = text2;

        m = str1.size();
        n = str2.size();

        dp.assign(m + 1, vector <int> (n + 1, 0));

        LargestCommonSubsequence(0, 0);  // We made the dp - matrix. 
        
        string scs = "";
        int i = 0, j = 0;

        while(i < m && j < n)
        {
            if(str1[i] == str2[j])
            {
                scs += str1[i];
                i++;
                j++;
            }
            else
                if(dp[i][j+1] > dp[i+1][j]) // max of right and bottom elements
                {
                    scs += str2[j];
                    j++;
                }
                else
                {
                    scs += str1[i];
                    i++;
                }
        }

        while(i < m) scs += str1[i++]; // Alternate for() loop, traversing the string.
        while(j < n) scs += str2[j++]; 

        return scs;
    }
    
};