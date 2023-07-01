
// class Solution {
// public:
//     void helper(int idx,vector<int>&cookies,vector<int>&child,int &ans){
//         if(idx == cookies.size()){  //base case check
//             int Min = INT_MIN;
//             for(int i=0;i<child.size();i++) Min = max(Min,child[i]);
//             ans = min(ans,Min);
//             return;
//         }
//         for(int i=0;i<child.size();i++){
//             child[i]+=cookies[idx];
//             helper(idx+1,cookies,child,ans); //include
//             child[i]-=cookies[idx]; //backtraking
//         }
//     }
//     int distributeCookies(vector<int>& cookies, int k) {
//         vector<int>child(k,0);
//         int ans = INT_MAX;
//         helper(0,cookies,child,ans);
//         return ans;
//     }
// };
/*
Time complexity:
O( k * child.size( ) ^ cookies.size( )).

Space complexity:
O( cookies.size( ) + k )
*/