//2462. Total Cost to Hire K Workers


// TIME COMPLEXITY : O(Candidates + k)log(Candidates + k)
// SPACE COMPLEXITY : O(Candidates)

// class Solution {
// public:
//     long long totalCost(vector<int>& costs, int k, int candidates) {
//         priority_queue<int,vector<int>,greater<int>>p1;
//         priority_queue<int,vector<int>,greater<int>>p2;
//         int start = 0;
//         int end = costs.size()-1;
//         long long ans = 0;
//         while(k--){
//             while(p1.size()<candidates && start<=end) p1.push(costs[start++]);
//             while(p2.size()<candidates && end>=start) p2.push(costs[end--]);
//             int cost1 = p1.size()>0?p1.top():INT_MAX;
//             int cost2 = p2.size()>0?p2.top():INT_MAX;
//             if(cost1<=cost2){ 
//                 ans+=cost1;
//                 p1.pop();
//             }
//             else {
//                 ans+=cost2;
//                 p2.pop();
//             }
//         } 
//         return ans;
//     }
// };