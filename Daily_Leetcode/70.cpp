
//2844. Minimum Operations to Make a Special Number


/*
class Solution {
public:
    int dp[100][25];
    int minimumOperations(string num) {
        memset(dp, -1, sizeof(dp));
        return helper(0, 0, num);
    }
    
    int helper(int i, int mod, string& num) {
        
        if (i == num.size()) {
            if (mod == 0)
                return 0;
            return 1e5;
        }
        
        if (dp[i][mod] != -1)
            return dp[i][mod];
        
        int take = helper(i + 1, (mod * 10 + num[i] - '0') % 25, num);
        int remove = 1 + helper(i + 1, mod, num);
        
        return dp[i][mod] = min(take, remove);
    }
};
*/