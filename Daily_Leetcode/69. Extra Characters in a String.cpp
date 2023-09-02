
//2707. Extra Characters in a String

/*
class Solution {
public:
    int f(int i,string &s,set<string>&st, vector<int>&dp){
        if(i>=s.size()) return 0;
        int ans = INT_MAX;
        if(dp[i]!= -1) return dp[i];
        ans = 1 + f(i+1,s,st,dp); //skiping the value.
        string temp = "";
        for(int j = i; j<s.length(); j++){
            temp+=s[j];
            if(st.find(temp)!=st.end()) ans = min(ans,f(j+1,s,st,dp));
        }
        return  dp[i] =  ans;
    }
    int minExtraChar(string s, vector<string>& dictionary) {
        set<string>st;
        vector<int>dp(s.length(),-1);
        for(auto it : dictionary) st.insert(it);
        return f(0,s,st,dp);
    }
};
*/