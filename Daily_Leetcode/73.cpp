//118.pascals traingle
/*
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>v;
        vector<vector<int>>dp(numRows+1,vector<int>(numRows+1,0));
        dp[1][1] = 1;
        vector<int>temp;
        temp.push_back(1);
        v.push_back(temp);
        for(int i=2;i<=numRows;i++){
            vector<int>row;
            for(int j=1;j<=i;j++){
                dp[i][j] = dp[i-1][j]+dp[i-1][j-1];
                row.push_back(dp[i][j]);
            }
            v.push_back(row);
        }
        for(int i = 0;i<numRows;i++){
            for(int j = 0 ;j<numRows;j++) cout<<dp[i][j]<<"";
            cout<<endl;
        }
        return v;
    }
};
*/