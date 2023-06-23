//1027. Longest Arithmetic Subsequence
/*
class Solution {
public:
    int longestArithSeqLength(std::vector<int>& nums) {
        int n = nums.size();
        if (n <= 2)
            return n;

        int longestLength = 2;
        std::vector<std::unordered_map<int, int>> dp(n);

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < i; j++) {
                int diff = nums[i] - nums[j];
                if (dp[j].find(diff) != dp[j].end()) {
                    dp[i][diff] = dp[j][diff] + 1;
                    longestLength = std::max(longestLength, dp[i][diff]);
                } else {
                    dp[i][diff] = 2;
                }
            }
        }

        return longestLength;
    }
};
*/