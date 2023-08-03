
//https://leetcode.com/problems/coin-change/description/
//https://practice.geeksforgeeks.org/explore?page=1&sortBy=submissions

/*

322. Coin Change

//recursion

class Solution {
public:
    int solve(vector<int>&coins,int amount){
        if(amount == 0) return 0;
        if(amount < 0) return INT_MAX;
        int mini = INT_MAX;
        for(int i=0;i<coins.size();i++){
            int ans = solve(coins,amount - coins[i]);
            if(ans!= INT_MAX) 
                mini = min(mini,ans+1);
        }
        return mini;
    }
    int coinChange(vector<int>& coins, int amount) {
        int ans = solve(coins,amount);
        if(ans == INT_MAX) return -1;
        return ans;
    }
};

//taken notTaken Recursion

class Solution {
public:
    //its  a case of taken or not taken 
    int solve(vector<int>& coins,int index,int amount)
    {
        if(index >= coins.size() || amount <= 0)
            return (amount == 0) ? 0 : INT_MAX - 1;
        
        int ans  = -1;
        if(coins[index] > amount)
        {
            int notTaken = 0 + solve(coins,index+1,amount);
            ans = notTaken;
        }
        else
        {
            int takeCoin = 1 + solve(coins,index + 0,amount - coins[index]);
            int notTaken = 0 + solve(coins,index + 1,amount);
            ans = min(takeCoin,notTaken);
        }
        return ans;
    }
    int coinChange(vector<int>& coins, int amount) {
        int val = solve(coins,0,amount);
        return (val == INT_MAX - 1) ? -1 : val;
    }
};

//Memorization
class Solution {
public:
    int solve(vector<int>&coins,int amount,vector<int>&dp){
        if(amount == 0) return 0;
        if(amount < 0) return INT_MAX;
        if(dp[amount] != -1) return dp[amount];
        int mini = INT_MAX;
        for(int i=0;i<coins.size();i++){
            int ans = solve(coins,amount - coins[i],dp);
            if(ans!= INT_MAX) 
                mini = min(mini,ans+1);
        }
        dp[amount] = mini;
        return mini;
    }
    int coinChange(vector<int>& coins, int amount) {
        int n = coins.size();
        vector<int>dp(amount+1,-1);
        int ans = solve(coins,amount,dp);
        if(ans == INT_MAX) return -1;
        return ans;
    }
};


*/

























// 2.Coin Change

/*

//Memorization

class Solution {
public:
    long long int rec(int idx, int coins[], int N, int sum) {
        if (idx == N) return 0;
        if (sum < 0) return 0;
        if (sum == 0) return 1;

        // Calculate the number of combinations by taking the current coin (coins[idx])
        long long int taken = rec(idx, coins, N, sum - coins[idx]);

        // Calculate the number of combinations by not taking the current coin (coins[idx])
        long long int notTaken = rec(idx + 1, coins, N, sum);

        // Return the total number of combinations by either taking or not taking the current coin
        return taken + notTaken;
    }

    long long int count(int coins[], int N, int sum) {
        return rec(0, coins, N, sum);
    }
};


//Tabulation

class Solution {
public:
    long long int count(int coins[], int N, int sum) {
        vector<long long int>a(N+ 1, 0);
        vector<vector<long long int>>dp(sum+ 1, a);
        for(int i=0; i<=N; i++){
            dp[0][i]= 1;
        }
        for(int i= 1; i<=sum; i++){
            for(int j=1; j<=N; j++){
                if(coins[j- 1]<= i){
                    dp[i][j]= dp[i][j]+ dp[i- coins[j- 1]][j];
                }
                dp[i][j]+= dp[i][j- 1];
            }
        }   
        return dp[sum][N];
    }
};
*/