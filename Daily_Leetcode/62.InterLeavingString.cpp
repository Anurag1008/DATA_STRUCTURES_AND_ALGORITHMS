
//97. Interleaving String

//Recurssion

/*
class Solution {
public:
    bool f(int i,int j,int k,string &s1,string &s2, string &s3){
        if(i<0 && j<0 && k<0) return true;
        
        if(i>=0 && j>=0 && k>=0 && s1[i] == s3[k] && s2[j] == s3[k])
            return f(i-1,j,k-1,s1,s2,s3) || f(i,j-1,k-1,s1,s2,s3);
        else if(i>=0 && k>=0 && s1[i] == s3[k]) return f(i-1,j,k-1,s1,s2,s3);
        else if(j>=0 && k>=0 && s2[j] == s3[k]) return f(i,j-1,k-1,s1,s2,s3);
        return false;
    }
    bool isInterleave(string s1, string s2, string s3) {
        return f(s1.length()-1,s2.length()-1,s3.length()-1,s1,s2,s3); 
    }
};
*/


//Memorization
/*
class Solution {
public:
    bool f(int i,int j,int k,string &s1,string &s2, string &s3,vector<vector<int>>&dp){
        if(i<0 && j<0 && k<0) return true;
        if(dp[i+1][j+1]!=-1) return dp[i+1][j+1];
        bool ans = false;
        if(i>=0 && j>=0 && k>=0 && s1[i] == s3[k] && s2[j] == s3[k])
            return ans = f(i-1,j,k-1,s1,s2,s3,dp) || f(i,j-1,k-1,s1,s2,s3,dp);
        else if(i>=0 && k>=0 && s1[i] == s3[k]) return ans = f(i-1,j,k-1,s1,s2,s3,dp);
        else if(j>=0 && k>=0 && s2[j] == s3[k]) return ans = f(i,j-1,k-1,s1,s2,s3,dp);
        return  dp[i+1][j+1] = ans;
    }
    bool isInterleave(string s1, string s2, string s3) {
        if(s1.length()+s2.length() !=  s3.length()) return false;
        vector<vector<int>>dp(s1.length()+1,vector<int>(s2.length()+1,-1));
        return f(s1.length()-1,s2.length()-1,s3.length()-1,s1,s2,s3,dp); 
    }
};
*/