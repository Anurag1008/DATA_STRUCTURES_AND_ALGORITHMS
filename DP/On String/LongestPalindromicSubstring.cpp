
//expand around center approach

//Time complexity  O(N^2)
//Space complexity O(1)
 
/*
class Solution {
public:
    string expandAroundCenter(string s, int left, int right) {
        int n = s.length();
        while (left >= 0 && right < n && s[left] == s[right]) {
            left--;
            right++;
        }
        // Adjust the indices to get the actual palindrome substring
        left++;
        right--;
        return s.substr(left, right - left + 1);
    }

    string longestPalindrome(string s) {
        int n = s.length();
        if (n <= 1) {
            return s;
        }
        
        int maxLen = 0;
        string result;
        for (int i = 0; i < n; i++) {
            // Expand around i as the center (odd-length palindrome)
            string odd = expandAroundCenter(s, i, i);
            if (odd.length() > maxLen) {
                maxLen = odd.length();
                result = odd;
            }
            
            // Expand around i and i+1 as centers (even-length palindrome)
            string even = expandAroundCenter(s, i, i + 1);
            if (even.length() > maxLen) {
                maxLen = even.length();
                result = even;
            }
        }
        
        return result;
    }
};

*/

// Dynamic programming appraoch

/*
#include<string.h>
class Solution {
public:
      bool solve(vector<vector<bool>> &dp, int i, int j, string &s){
        if(i == j){
            return dp[i][j] = true;
        }
        if(j-i == 1){
            if(s[i] == s[j]){
                return dp[i][j] = true;
            }
            else{
                return dp[i][j] = false;
            }
        }
        if(s[i] == s[j] && dp[i+1][j-1] == true){
            return dp[i][j] = true;
        } else {
            return dp[i][j] = false;
        }
    }
    
    string longestPalindrome(string s) {
        int n = s.size();
        int startIndex = 0; int maxlen = 0;
        vector<vector<bool>> dp(n, vector<bool>(n, false));
        for(int g=0; g<n; g++){
            for(int i=0, j=g; j<n; i++, j++){
                solve(dp, i, j, s);
                if(dp[i][j] == true){
                    if(j-i+1 > maxlen){
                        startIndex = i;
                        maxlen = j-i+1;
                    }
                }
            }
        }
        return s.substr(startIndex, maxlen);
    }
    
};
*/