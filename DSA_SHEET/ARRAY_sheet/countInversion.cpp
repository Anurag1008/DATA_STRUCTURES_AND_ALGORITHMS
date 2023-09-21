bool check(int i,vector<int>&v,int x){
    int left = i-1;
    int right = i+1;
    int count = 0;
    while(left >= 0 && right <= v.size()-1){
        if(v[left]  <= v[i] && v[right] >= v[i]){
            left--;
            right++;
            count++;
        }
        else break;
    }
    if(x<=count) return true;
    return false;
}

int helper(int i,vector<int>&v,int days){
    int ans = 0;
    for(int i=0;i<v.size();i++){
        if(check(i,v,x)) ans++;
    }
    return ans;
}
