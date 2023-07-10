//72. Edit Distance

/*
class Solution {
public:
    int dfs(int i,int j,string &word1,string &word2,vector<vector<int>>&dp){
        if(i == word1.length()) return word2.length() - j;
        if(j == word2.length()) return word1.length() - i;
        if(dp[i][j] != -1 ) return dp[i][j];
        int ans = 0;
        if(word1[i] == word2[j]) return dfs(i+1,j+1,word1,word2,dp);
        else{
            int ansIns = 1 + dfs(i,j+1,word1,word2,dp);
            int ansDel = 1 + dfs(i+1,j+1,word1,word2,dp);
            int ansRep = 1 + dfs(i+1,j,word1,word2,dp);
            ans = min(ansIns,min(ansDel,ansRep));
        }
        return dp[i][j] = ans;
    }
    int minDistance(string word1, string word2) {
        int n = word1.size();
        int m = word2.size();
        vector<vector<int>>dp(n,vector<int>(m,-1));
        return dfs(0,0,word1,word2,dp);
    }
};
*/