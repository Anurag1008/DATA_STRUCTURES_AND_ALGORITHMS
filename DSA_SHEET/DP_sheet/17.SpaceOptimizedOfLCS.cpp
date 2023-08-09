/*

**Tabulation
class Solution
{
    public:
    //Function to find the length of longest common subsequence in two strings.
    int lcs(int n, int m, string s1, string s2)
    {
        int dp[n+1][m+1];
        for(int i=0;i<=n;i++){
            for(int j=0;j<=m;j++){
                if(i == 0 || j == 0) dp[i][j] = 0;
                else if(s1[i-1] == s2[j-1]) dp[i][j] = dp[i-1][j-1]+1;
                else dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
            }
        }
        return dp[n][m];
    }
};

**Space Optimized
class Solution
{
public:
    int lcs(int n, int m, string s1, string s2)
    {
        vector<int> dp(m + 1, 0);
        
        for (int i = 1; i <= n; i++)
        {
            int prev = dp[0];
            for (int j = 1; j <= m; j++)
            {
                int temp = dp[j];
                if (s1[i - 1] == s2[j - 1])
                    dp[j] = prev + 1;
                else
                    dp[j] = max(dp[j], dp[j - 1]);
                prev = temp;
            }
        }

        return dp[m];
    }
};



*/