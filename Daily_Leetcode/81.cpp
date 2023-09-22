//392. Is Subsequence
/*
class Solution {
public:
    bool isSubsequence(string s, string t) {
        int t_size = t.length();
        int s_size = s.length();
        if(s_size==0 && t_size==0) return true;
        if(s_size > t_size) return false;
        int j = 0;
        for(int i=0;i<t_size;i++){
            if(s[j] == t[i]) j++;
            if(j==s_size) return true;
        }
        return false;
    }
};
*/