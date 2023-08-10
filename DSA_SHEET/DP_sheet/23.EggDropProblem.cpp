
/*
// Recurssion

int superEggDrop(int e, int f)
{
    if (f == 0 || f == 1)
        return f;
    if (e == 1)
        return f; // from top floor because asked for worst case
    int Min = INT_MAX;
    for (int k = 1; k <= f; k++)
    {
        int temp = 1 + max(superEggDrop(e - 1, k - 1), superEggDrop(e, f - k));
        Min = min(Min, temp);
    }
    return Min;
}


//memorization
class Solution {
public:
    int memo(int e,int f,vector<vector<int>>&dp){
        if(f==0 || f==1) return f;
        if(e==1) return f; //from top floor because asked for worst case
        if(dp[e][f]!=-1) return dp[e][f];
        int Min = INT_MAX;
        for(int k=1;k<=f;k++){
            int temp =1 + max(memo(e-1,k-1,dp),memo(e,f-k,dp));
            Min = min(Min,temp);
        }
        return dp[e][f] = Min;
    }
    int superEggDrop(int e, int f) {
        vector<vector<int>>dp(e+1,vector<int>(f+1,-1));
        return memo(e,f,dp);
    }
};

//optimized memorization

class Solution {
public:
    int memo(int e,int f,vector<vector<int>>&dp){
        if(f==0 || f==1) return f;
        if(e==1) return f; //from top floor because asked for worst case
        if(dp[e][f]!=-1) return dp[e][f];
        int Min = INT_MAX;
        for(int k=1;k<=f;k++){
            int low,high;

            if(dp[e-1][k-1]!= -1) low = dp[e-1][k-1];
            else{
                low = memo(e-1,k-1,dp);
                dp[e-1][k-1]=low;
            }

            if(dp[e][f-k]!=-1) high = dp[e][f-k];
            else{
                high = memo(e,f-k,dp);
                dp[e][f-k] = high;
            }

            int temp = 1 + max(low,high);
            Min = min(Min,temp);

            
            //int temp =1 + max(memo(e-1,k-1,dp),memo(e,f-k,dp));
            //Min = min(Min,temp);
        }
        return dp[e][f] = Min;
    }
    int superEggDrop(int e, int f) {
        vector<vector<int>>dp(e+1,vector<int>(f+1,-1));
        return memo(e,f,dp);
    }
};

// we can do more optimization by removing loop O(n) with O(logn) binary search
class Solution {
public:
    int memo(int e,int f,vector<vector<int>>&dp){
        if(f==0 || f==1) return f;
        if(e==1) return f; //from top floor because asked for worst case
        if(dp[e][f]!=-1) return dp[e][f];
        int Min = INT_MAX;
        int l = 1;
        int r = f;
        int temp = 0;

        while(l<=r){
            int mid = (l+r)/2;
            int left = memo(e-1,mid-1,dp);
            int right = memo(e,f-mid,dp);
            temp = 1 + max(left,right);
            if(left < right) l = mid+1;
            else r = mid - 1;
            Min = min(Min,temp);
        }
        return dp[e][f] = Min;
    }
    int superEggDrop(int e, int f) {
        vector<vector<int>>dp(e+1,vector<int>(f+1,-1));
        return memo(e,f,dp);
    }

    //Tabulation
    class Solution {
public:
    
    int superEggDrop(int K, int N) {
        if(N==0||N==1) return N;     //Think for base case
        if(K==1) return N;
        
        vector<vector<int>> dp(K+1,vector<int> (N+1,0));
      for(int i=0;i<=K;i++)
        dp[i][0]=0,dp[i][1]=1;   //Filling from base case as if N==0 ans=0 , N==1 ans=1
      for(int i=0;i<=N;i++)
        dp[0][i]=0,dp[1][i]=i;   //Filling from base case as if K==0 ans=0 , K==1 ans=N, number of current floor (i)
        
        for(int i=2;i<K+1;i++)
        {
            for(int j=2;j<N+1;j++)
            {    int l=1,h=j,temp=0,ans=100000;
                 while(l<=h)
                 {
                    int mid=(l+h)/2;
                    int left= dp[i-1][mid-1]; //egg broken check for down floors of mid
                    int right= dp[i][j-mid];  // not broken check for up floors of mid
                    temp=1+max(left,right);          //store max of both 
                    if(left<right){                  //since right is more than left and we need more in worst case 
                      l=mid+1;                       // so l=mid+1 to gain more temp for worst case : upward
                    }
                    else                             //left > right so we will go downward 
                    {    
                        h=mid-1;
                    }
                    ans=min(ans,temp);               //store minimum attempts
                 }
                 dp[i][j]=ans;
            }
        }
        return dp[K][N];
         
    }
};

*/