//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
    public:
    void createEdge(vector<vector<int>>&adj,char u,char v){
        adj[u-'a'].push_back(v-'a');
    }
    
    void topological_sort(int node,vector<vector<int>>&adj,stack<int>&s,vector<bool>&visited){
        visited[node] = true;
        for(auto neighbors : adj[node]){
            if(!visited[neighbors]){
                topological_sort(neighbors,adj,s,visited);
            }
        }
        s.push(node);
    }
    
    string findOrder(string dict[], int N, int K) {
        //code here
        stack<int>s;
        vector<vector<int>>adj(K);
        string ans = "";
        
        //creating a adjList
        int j{0};
        for(int i=0;i<N-1;i++){
            string f = dict[i];
            string s = dict[i+1];
            while(j < f.length() && j < s.length()){
                if(f[j]!=s[j]){
                    createEdge(adj,f[j],s[j]);
                    break;
                }
                j++;
            }
            j=0;
        }
        
        vector<bool>visited(K,false);
        
        //adj list bnn gyi
        for(int i=0;i<K;i++){
            if(!visited[i]){
                topological_sort(i,adj,s,visited);
            }
        }
        
        while(!s.empty()){
            ans += char(s.top()+'a');
            s.pop();
        }
        
        // for(int i=0;i<ans.length();i++){
        //     cout<<ans[i];
        // }
        // cout<<endl;
        
        return ans;
        
    }
};

//{ Driver Code Starts.
string order;
bool f(string a, string b) {
    int p1 = 0;
    int p2 = 0;
    for (int i = 0; i < min(a.size(), b.size()) and p1 == p2; i++) {
        p1 = order.find(a[i]);
        p2 = order.find(b[i]);
        //	cout<<p1<<" "<<p2<<endl;
    }

    if (p1 == p2 and a.size() != b.size()) return a.size() < b.size();

    return p1 < p2;
}

// Driver program to test above functions
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> N >> K;
        string dict[N];
        for (int i = 0; i < N; i++) cin >> dict[i];
        
        Solution obj;
        string ans = obj.findOrder(dict, N, K);
        order = "";
        for (int i = 0; i < ans.size(); i++) order += ans[i];

        string temp[N];
        std::copy(dict, dict + N, temp);
        sort(temp, temp + N, f);

        bool f = true;
        for (int i = 0; i < N; i++)
            if (dict[i] != temp[i]) f = false;

        if(f)cout << 1;
        else cout << 0;
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends