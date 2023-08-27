
//403. Frog Jump

/*
class Solution {
public:
    bool recc(int curr,int k,vector<int>&s,vector<vector<int>>&dp){
        int n = s.size();
        if(curr == n-1) return 1;
        if(dp[curr][k]!=-1) return dp[curr][k];
        bool a = false;
        for(int i= curr+1;i<n;i++){
            if(s[i] > s[curr]+k+1) break;
            else if(s[i] == s[curr]+k-1) a|=recc(i,k-1,s,dp);
            else if(s[i] == s[curr]+k) a|=recc(i,k,s,dp);
            else if(s[i] == s[curr]+k+1) a|=recc(i,k+1,s,dp);
        }
        return dp[curr][k] =a;
    }
    bool canCross(vector<int>& stones) {
        int n = stones.size();
        vector<vector<int>>dp(n+2,vector<int>(4000,-1));
        return recc(0,0,stones,dp);
    }
};
*/