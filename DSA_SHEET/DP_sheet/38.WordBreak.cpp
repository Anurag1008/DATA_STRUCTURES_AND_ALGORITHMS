/*

https://leetcode.com/problems/word-break/description/

139. Word Break


class Solution {
public:
    //recurrsion
    bool recc(int i,string s,set<string>&st){
        if(i == s.length()) return 1;
        string temp;
        for(int j= i;j<s.length();j++){
            temp+=s[j];
            if(st.find(temp)!=st.end()) 
                if(recc(j+1,s,st)) return 1;
        }
        return 0;
    }
    
    //Memorization
    bool memo(int i,string s,set<string>&st,vector<int>&dp){
        if(i == s.length()) return 1;
        if(dp[i] != -1) return dp[i];
        string temp;
        for(int j= i;j<s.length();j++){
            temp+=s[j];
            if(st.find(temp)!=st.end()) 
                if(memo(j+1,s,st,dp)) return dp[i] =  1;
        }
        return dp[i]=0;
    }
    bool wordBreak(string s, vector<string>& wordDict) {
        set<string>st;
        vector<int>dp(301,-1);
        for(auto it : wordDict) st.insert(it);
        return memo(0,s,st,dp);
    }
};

*/