/*
https://leetcode.com/problems/edit-distance/description/

72. Edit Distance

recurssion

class Solution {
public:
    int recc(int i,int j,string &w1,string &w2){
        if(i == w1.length()) return w2.length()-j;
        if(j == w2.length()) return w1.length()-i;
        int ans = 0;
        if(w1[i] == w2[j]) ans = recc(i+1,j+1,w1,w2);
        else{
            int ins = 1 + recc(i,j+1,w1,w2);
            int del = 1 + recc(i+1,j+1,w1,w2);
            int rep = 1 + recc(i+1,j,w1,w2);
            ans = min(ins,min(del,rep));
        }
        return ans;
    }
    int minDistance(string word1, string word2) {
        return recc(0,0,word1,word2);
    }
};

Memorization

class Solution {
public:
    int recc(int i,int j,string &w1,string &w2,vector<vector<int>>&dp){
        if(i == w1.length()) return w2.length()-j;
        if(j == w2.length()) return w1.length()-i;
        if(dp[i][j] != -1) return dp[i][j];
        int ans = 0;
        if(w1[i] == w2[j]) ans = recc(i+1,j+1,w1,w2,dp);
        else{
            int ins = 1 + recc(i,j+1,w1,w2,dp);
            int del = 1 + recc(i+1,j+1,w1,w2,dp);
            int rep = 1 + recc(i+1,j,w1,w2,dp);
            ans = min(ins,min(del,rep));
        }
        return dp[i][j]=ans;
    }
    int minDistance(string word1, string word2) {
        vector<vector<int>>dp(501,vector<int>(501,-1));
        return recc(0,0,word1,word2,dp);
    }
};

//tabulation



*/