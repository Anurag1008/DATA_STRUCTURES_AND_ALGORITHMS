/*
vector<vector<int>> groupSort(vector<int> arr) {
    vector<vector<int>>ans;
    unordered_map<int,int>mp;
    for(int i=0;i<arr.size();i++) mp[arr[i]]++;
    priority_queue<pair<int,int>>pq;
    for(auto it : mp){
        pq.push({it.second,it.first});
    }
    while(!pq.empty()){
        pair<int,int>top = pq.top();
        pq.pop();
        ans.push_back({top.second,top.first});
    }
    
    for (int i = 0; i < ans.size(); i++) {
        int left = i;
        int right = i;
        
        // Find the range of equal frequencies
        while (right + 1 < ans.size() && ans[right][1] == ans[right + 1][1]) {
            right++;
        }
        
        if (right - left + 1 > 1) {
            sort(ans.begin() + left, ans.begin() + right + 1);  // Sort the subgroup by element value
        }
        
        i = right;  // Skip to the next different frequency
    }
    return ans;
}
*/