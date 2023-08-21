
//https://practice.geeksforgeeks.org/problems/optimal-strategy-for-a-game-1587115620/1

//Optimal Strategy for game

/*
class Solution{
    public:
    long long amount(int i,int j,int turn,int arr[],int n,vector<vector<vector<int>>>&dp){
        if(i > j ) return 0;
        if(dp[turn][i][j]!=-1) return dp[turn][i][j];
        long long first = 0,last = 0;
        if(turn){
            //meri chance 
            first = arr[i] + amount(i+1,j,0,arr,n,dp);
            last = arr[j] + amount(i,j-1,0,arr,n,dp);
        }
        else{
            first = amount(i+1,j,1,arr,n,dp);
            last = amount(i,j-1,1,arr,n,dp);
        }
        return dp[turn][i][j] = turn ? max(last,first) : min(last,first);
    }
    long long maximumAmount(int arr[], int n){
        vector<vector<vector<int>>>dp(2,vector<vector<int>>(n+1,vector<int>(n+1,-1)));
        long long ans  = amount(0,n-1,1,arr,n,dp);
        return ans;
    }
};
*/