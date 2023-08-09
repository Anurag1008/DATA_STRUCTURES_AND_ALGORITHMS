/*
https://practice.geeksforgeeks.org/problems/lcs-of-three-strings0028/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article

LCS of three strings


int dp[21][21][21];

int lcs(int i,int j,int k,string &A,string &B,string &C){
    if(i >= A.length() || j >= B.length() || k>= C.length()) return 0;
    if(dp[i][j][k] != -1) return dp[i][j][k];
    
    if(A[i] == B[j] && B[j] == C[k]) return 1 + lcs(i+1,j+1,k+1,A,B,C);
     return dp[i][j][k]=max(lcs(i+1,j,k,A,B,C),max(lcs(i,j+1,k,A,B,C),lcs(i,j,k+1,A,B,C)));
}
int LCSof3 (string A, string B, string C, int n1, int n2, int n3)
{
    memset(dp,-1,sizeof(dp));
    return lcs(0,0,0,A,B,C);
}




*/