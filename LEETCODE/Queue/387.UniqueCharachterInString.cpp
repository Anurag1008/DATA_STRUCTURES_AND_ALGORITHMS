
//387. First Unique Character in a String


#include <vector>
#include <unordered_map>
#include <queue>

using namespace std;

class Solution {
public:
    int firstUniqChar(string s) {
        vector<int>v(26,0);
        queue<char>q;
        for(int i=0;i<s.length();i++)
            if(++v[s[i]-'a'] == 1) q.push(s[i]);
        char front;
        while(!q.empty()){
            front = q.front();
            if(v[front-'a'] == 1) break;
            front = -1;
            q.pop();
        }

        if(front )
        for(int i=0;i<s.length();i++) if(s[i] == front) return i;

        return -1;
    }
};