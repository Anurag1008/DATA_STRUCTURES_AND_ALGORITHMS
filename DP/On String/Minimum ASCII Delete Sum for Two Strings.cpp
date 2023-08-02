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
class Solution {
public:
    struct PairHash {
        template <class T1, class T2>
        std::size_t operator()(const std::pair<T1, T2>& p) const {
            auto h1 = std::hash<T1>{}(p.first);
            auto h2 = std::hash<T2>{}(p.second);
            return h1 ^ h2;
        }
    };

    std::unordered_map<std::pair<int,int>,int, PairHash> mp;

    int dfs(int i,int j,string &s,string &l){
        if(i<0 && j<0) return 0;
        pair<int,int>key = make_pair(i,j);
        if(mp.find(key)!=mp.end()) return mp[key];
        if(i<0){
            mp[key] = l[j] + dfs(i,j-1,s,l);
            return mp[key];
        }
        if(j<0){
            mp[key] = s[i] + dfs(i-1,j,s,l);
            return mp[key];
        }
        if(s[i]==l[j]) {
            mp[key] =  dfs(i-1,j-1,s,l);
            return mp[key];
        }
        else{
            mp[key] =  min(int(s[i]) + dfs(i-1,j,s,l),min(int(l[j]) + dfs(i,j-1,s,l),int(s[i]) + int(l[j]) + dfs(i-1,j-1,s,l)));
        }
        return mp[key];
    }
    int minimumDeleteSum(string s1, string s2) {
        int n = s1.length();
        int m = s2.length();
        return dfs(n-1,m-1,s1,s2);
    }
};

*/