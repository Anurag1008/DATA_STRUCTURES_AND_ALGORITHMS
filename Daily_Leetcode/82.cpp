//1048 : longest string chain

/*
class Solution {
public:
    int longestStrChain(vector<string>& words) {
        sort(words.begin(),words.end(),[](string a,string b){
            return a.length()<b.length();
        });
        unordered_map<string,int>mp;
        int ans = 0;
        for(auto w : words){
            int longest = 0;
            for(int i=0;i<w.size();i++){
                string sub = w;
                sub.erase(i,1);
                longest = max(longest,mp[sub]+1);
            }
            mp[w] = longest;
            ans= max(ans,longest);
        }
        return ans;
    }
};
*/