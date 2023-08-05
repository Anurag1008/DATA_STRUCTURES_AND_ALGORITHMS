/*
Painting the Fence

https://practice.geeksforgeeks.org/problems/painting-the-fence3727/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article

//recursion with memorization
#define mod 1000000007

class Solution {
public:
    
    long long bottomUp(int n, int k, vector<long long>& dp) {
        if (n == 1) {
            return k;
        }
        if (n == 2) {
            return (k + k * (k - 1));
        }

        if (dp[n] != -1) {
            return dp[n];
        }

        dp[n] = ((bottomUp(n - 2, k, dp) + bottomUp(n - 1, k, dp)) * (k - 1))%mod;

        return dp[n];
    }
    
    long long countWays(int n, int k) {
        vector<long long>dp(n+1,-1);
        return bottomUp(n, k,dp);
    }
};

*/