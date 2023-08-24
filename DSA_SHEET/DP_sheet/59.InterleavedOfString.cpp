//


//Interleaved Of String

//Recurssion
/*

//User function template for C++

class Solution{
  public:
    bool f(string a,string b, string c){
        if(a.empty() && b.empty() && c.empty()) return true;
        if(c.empty()) return false;
        return (((a[0] == c[0]) && f(a.substr(1), b, c.substr(1))) || ((b[0] == c[0]) && f(a, b.substr(1), c.substr(1))));
        
    }
    bool isInterleave(string A, string B, string C) 
    {
        return f(A,B,C);
    }

};

*/

//Memorization
/*

class Solution{
public:
    // Define a memoization table to store results
    vector<vector<int>> memo;

    // Helper function with memoization
    bool f(string a, string b, string c, int i, int j) {
        // Check if the result is already computed
        if (memo[i][j] != -1) {
            return memo[i][j];
        }

        if (i == a.size() && j == b.size()) {
            return memo[i][j] = true;
        }

        bool result = false;

        if (i < a.size() && a[i] == c[i + j]) {
            result = result || f(a, b, c, i + 1, j);
        }

        if (j < b.size() && b[j] == c[i + j]) {
            result = result || f(a, b, c, i, j + 1);
        }

        // Store and return the result in the memo table
        return memo[i][j] = result;
    }

    bool isInterleave(string A, string B, string C) {
        int lenA = A.size();
        int lenB = B.size();
        int lenC = C.size();

        // Initialize memoization table with -1 (not computed) values
        memo.assign(lenA + 1, vector<int>(lenB + 1, -1));

        if (lenA + lenB != lenC) {
            return false;
        }

        return f(A, B, C, 0, 0);
    }
};
*/