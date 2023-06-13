// //2352  Equal Row and Column Pairs

// class Solution {
// public:
//     int equalPairs(vector<vector<int>>& v) {
//         map<vector<int>,int>count;
//         int ans{0};
//         int n = v.size();
//         int m = v[0].size();
//         for(vector<int> it : v){
//             count[it]++;
//         }
//         for(int i=0;i<n;i++){
//             vector<int>col = {};
//             for(int j=0;j<m;j++){
//                 col.push_back(v[j][i]);
//             }
//             ans+=count[col];
//         }
//         return ans;
//     }
// };

// time complexity : O(n^2)  
// space complexity : O(n^2)
// it faster than the below approach.


// class Solution {
// public:
//     int equalPairs(vector<vector<int>>& v) {
//         int n=v.size();
//         int r=0;
//         vector<vector<int>>c=v;
//         for(int i=0;i<n;i++){
//             for(int j=i;j<n;j++)swap(v[i][j],v[j][i]);
//         }
//         for(int i=0;i<n;i++){
//             for(int j=0;j<n;j++){
//                 if(v[i]==c[j])r++;
//             }
//         }
//         return r;
//     }
// };

// time complexity : O(n^2)  
// space complexity : O(n^2)


