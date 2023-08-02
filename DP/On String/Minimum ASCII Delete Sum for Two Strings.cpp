//712. Minimum ASCII Delete Sum for Two Strings

/*
//Recursive solution

class Solution {
public:
    int dfs(int i,int j,string &s,string &l){
        if(i<0){
            int ans = 0;
            for(int idx=0;idx<=j;idx++) ans+= int(l[idx]);
            return ans;
        }
        if(j<0){
            int ans = 0;
            for(int idx=0;idx<=i;idx++) ans += int(s[idx]);
            return ans;
        }
        if(s[i]==l[j]) return dfs(i-1,j-1,s,l);
        else{
            return min(int(s[i]) + dfs(i-1,j,s,l),min(int(l[j]) + dfs(i,j-1,s,l),int(s[i]) + int(l[j]) + dfs(i-1,j-1,s,l)));
        }
    }
    int minimumDeleteSum(string s1, string s2) {
        int n = s1.length();
        int m = s2.length();
        return dfs(n-1,m-1,s1,s2);
    }
};

*/

//Memorization
/*

*/