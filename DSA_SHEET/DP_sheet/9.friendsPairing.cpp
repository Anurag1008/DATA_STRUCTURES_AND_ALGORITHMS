/*
https://practice.geeksforgeeks.org/problems/friends-pairing-problem5425/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article


//memorization
#define mod 1000000007
#define ll long long

class Solution
{
public:
    ll recc(int n,vector<ll>&dp){
        if(n==1 || n == 2) return n;
        if(dp[n] != -1) return dp[n];
        ll a = recc(n-1,dp)%mod;
        ll b = ((n-1)*recc(n-2,dp)%mod)%mod;
        return dp[n] = (a+b)%mod;
    }
    int countFriendsPairings(int n) 
    { 
        vector<ll>dp(n+1,-1);
        return recc(n,dp);
    }
};   

*/