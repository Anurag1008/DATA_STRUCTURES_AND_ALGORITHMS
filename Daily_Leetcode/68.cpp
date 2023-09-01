//338. Counting Bits


/*
class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>ans;
        ans.push_back(0);
        int i = 1;
        while(i!=n+1){
            int count = 0;
            int j = i;
            while(j!=0){
                if(j&1) count++;   
                j = j>>1;
            }
            i++;
            ans.push_back(count);
        }
        return ans;
    }
};
*/
/*

//more optamized answer

class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>t(n+1);
        t[0] = 0;
        for(int i = 1;i<=n;++i)
            t[i] = t[i/2] + i%2;
        
        return t;
    }
};
*/