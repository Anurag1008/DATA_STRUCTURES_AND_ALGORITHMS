
//https://practice.geeksforgeeks.org/explore?page=1&sortBy=submissions

// Coin Change

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