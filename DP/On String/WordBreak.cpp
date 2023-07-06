//139. Word Break

//Time Complexity : O ( s.length()^2 * wordDict.size() ) 
//Space Complexity : O ( 1 + wordDict.size() ) : // 301 considered in const space of 1

/*
class Solution {
public:
    int dp[301];
    bool help(int i,string s,set<string>& st){
        if(i == s.length()) return 1;
        if(dp[i]!=-1) return dp[i];
        string temp;
        for(int j=i;j<s.length();j++){
            temp+=s[j];
            if(st.find(temp)!=st.end()){
                if(help(j+1,s,st)) return dp[i]=1;
            }
        }
        return dp[i]=0;
    }
    bool wordBreak(string s, vector<string>& wordDict) {
        set<string> st;
        memset(dp,-1,sizeof(dp));
        //using st because it does not store dublicate data
        for(auto it : wordDict) st.insert(it);
        return help(0,s,st);
    }
};
*/