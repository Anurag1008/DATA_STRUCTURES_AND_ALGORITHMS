/*
https://practice.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article
  
Subset Sum Problem

//Recurssion

class Solution{   
public:
    //take or not take situation
    bool present(int i,vector<int>arr,int sum){
        if(i >= arr.size()) return 0;
        if(sum == 0) return 1;
        int take = present(i+1,arr,sum - arr[i]);
        int notTake = present(i+1,arr,sum);
        return take||notTake;
    }
    bool isSubsetSum(vector<int>arr, int sum){
        return present(0,arr,sum);
    }
};

//Memorization

class Solution{   
public:
    //take or not take situation
    
    bool present(int i, vector<int>& arr, int sum, vector<vector<int>>& dp) {
    if (sum == 0) return true;
    if (i >= arr.size() || sum<0) return false;
    if (dp[i][sum] != -1) return dp[i][sum];
    
    bool take = present(i + 1, arr, sum - arr[i], dp);
    bool notTake = present(i + 1, arr, sum, dp);
    
    return dp[i][sum] = take || notTake;
}

bool isSubsetSum(vector<int>& arr, int sum) {
    int n = arr.size();
    vector<vector<int>> dp(n + 1, vector<int>(sum + 1, -1));
    return present(0, arr, sum, dp);
}

};
*/