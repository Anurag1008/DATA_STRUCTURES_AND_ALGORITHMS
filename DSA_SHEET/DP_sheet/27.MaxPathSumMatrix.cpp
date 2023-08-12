
//https://practice.geeksforgeeks.org/problems/path-in-matrix3805/1

//Maximum path sum in matrix

//Recurssion

/*

class Solution{
public:
    int recc(int i,int j,vector<vector<int>>&matrix,int N){
        if(i >= N || j >= N || i < 0 || j < 0) return 0;
        int down = matrix[i][j] + recc(i+1,j,matrix,N);
        int downleft = matrix[i][j] + recc(i+1,j-1,matrix,N);
        int downright = matrix[i][j] + recc(i+1,j+1,matrix,N);
        return max(down,max(downleft,downright));
    } 
    int maximumPath(int N, vector<vector<int>> Matrix)
    {
        int ans = INT_MIN;
        for(int i=0;i<N;i++){
            int value = recc(0,i,Matrix,N);
            ans = max(ans,value);
        }
        return ans;
    }
};

*/

//Memorization

/*

class Solution{
public:
    int dp[501][501];
    int recc(int i,int j,vector<vector<int>>&matrix,int N){
        if(i >= N || j >= N || i < 0 || j < 0) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        int down = matrix[i][j] + recc(i+1,j,matrix,N);
        int downleft = matrix[i][j] + recc(i+1,j-1,matrix,N);
        int downright = matrix[i][j] + recc(i+1,j+1,matrix,N);
        return dp[i][j]=max(down,max(downleft,downright));
    } 
    int maximumPath(int N, vector<vector<int>> Matrix)
    {
        memset(dp,-1,sizeof(dp));
        int ans = INT_MIN;
        for(int i=0;i<N;i++){
            int value = recc(0,i,Matrix,N);
            ans = max(ans,value);
        }
        return ans;
    }
};

*/