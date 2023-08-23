
//767. Reorganize String


/*
class Solution {
public:
    string reorganizeString(string s) {

        //storing value in map
        unordered_map<char,int>mp;
        for(char c : s) mp[c]++;

        //puting it in priority_queue
        priority_queue<pair<int,char>>pq;
        for(auto &[ch,freq] : mp) pq.push({freq,ch});

        //creating a string with no distinct element
        string res = "";

        while(pq.size() >= 2){
            pair<int,char>p1 = pq.top();
            pq.pop();
            pair<int,char>p2 = pq.top();
            pq.pop();

            res+=p1.second;
            res+=p2.second;
            
            int f1 = p1.first;
            int f2 = p2.first;
            
            if(--f1 > 0) pq.push({f1,p1.second});
            if(--f2 > 0) pq.push({f2,p2.second});
        }

        if(!pq.empty()){
            pair<int,char>p = pq.top();
            if(p.first > 1) return "";
            res+=p.second;
        }

        return res;
    }
};
*/