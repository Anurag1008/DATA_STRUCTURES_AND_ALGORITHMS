

//518.Coin Change Problem II

//Recurssion

/*
class Solution {
public:
    int recc(int i,int amount,vector<int>&coins){
        if(i >= coins.size()) return 0;
        if(amount == 0) return 1;
        int take = 0;
        if(coins[i] <= amount) take = recc(i,amount - coins[i],coins);
        int not_take = recc(i+1,amount,coins);
        return take+not_take;
    }
    int change(int amount, vector<int>& coins) {
        return recc(0,amount,coins);
    }
};
*/

/*
class Solution {
public:
    int recc(int i,int amount,vector<int>&coins,vector<vector<int>>&dp){
        if(i >= coins.size()) return 0;
        if(amount == 0) return 1;
        if(dp[i][amount]!=-1) return dp[i][amount];
        int take = 0;
        if(coins[i] <= amount) take = recc(i,amount - coins[i],coins,dp);
        int not_take = recc(i+1,amount,coins,dp);
        return dp[i][amount] = take+not_take;
    }
    int change(int amount, vector<int>& coins) {
        int n = coins.size();
        vector<vector<int>>dp(n+1,vector<int>(amount+1,-1));
        return recc(0,amount,coins,dp);
    }
};
*/

