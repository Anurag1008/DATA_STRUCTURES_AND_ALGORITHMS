
//https://leetcode.com/problems/maximum-length-of-pair-chain/submissions/

//Maximum Length of Chain

//Recursion with memorization

/*
#include <algorithm>
class Solution {
public:
    static bool sortcol(const vector<int>& v1, const vector<int>& v2){ return v1[0] < v2[0];}

    int recc(int i,int prev,vector<vector<int>>& pairs,vector<vector<int>>&dp){
        if(i >= pairs.size()) return 0;
        if(dp[i][prev+1]!=-1) return dp[i][prev+1];
        int take = 0;
        if(prev == -1 || pairs[prev][1]<pairs[i][0]) take = 1 + recc(i+1,i,pairs,dp);
        int notTake = recc(i+1,prev,pairs,dp);
        return dp[i][prev+1] = max(take,notTake);
    }
    int findLongestChain(vector<vector<int>>& pairs) {
        sort(pairs.begin(), pairs.end(), sortcol);
        int n = pairs.size();
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        return recc(0,-1,pairs,dp);
    }
};
*/