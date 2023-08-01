/*
using int2=pair<int, int>;
struct pair_hash
{
    size_t operator() (const int2& pair) const {
        return hash<int>()(pair.first) ^ hash<int>()(pair.second);
    }
};
class Solution {
public:
    unordered_map<int2, vector<vector<int>>, pair_hash> mp;
    
    vector<vector<int>> comb(int n, int k){
        if (n==1 && k==1) return mp[{1,1}]={{1}};
        if (mp.count({n, k})!=0) return mp[{n, k}];
        vector<vector<int>> ans={};
        if (k==1){
            for(int x=1; x<=n; x++) ans.push_back({x});
        } 
        else if (n==k){
            ans.resize(1);
            for(int x=1; x<=n; x++) ans[0].push_back(x);
        }
        else{
            ans=comb(n-1, k);
            vector<vector<int>> c_wo_n=comb(n-1, k-1);
            for (vector<int>& v: c_wo_n){
                vector<int> v_w_n=v;
                v_w_n.push_back(n);
                ans.push_back(v_w_n);
            }
        }
        return mp[{n, k}]=ans;
    }
    vector<vector<int>> combine(int n, int k) {
        return comb(n, k);
    }
};
*/