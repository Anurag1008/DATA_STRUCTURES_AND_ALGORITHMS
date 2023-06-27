//373. Find K Pairs with Smallest Sums


// Time complexity: O(n * m * log k)
// Space complexity: O(k)


// class Solution {
// public:
//     vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
//         priority_queue<pair<int,pair<int,int>>>pq;

//         int n = nums1.size();
//         int m = nums2.size();
        
//         for(int i=0;i<n;i++)
//             for(int j=0;j<m;j++){ 
//                 int x = nums1[i];
//                 int y = nums2[j];
//                 int sum = x + y;
//                 if(pq.size() < k) pq.push({sum,{x,y}});
//                 else if(pq.top().first > sum){
//                     pq.pop();
//                     pq.push({sum,{x,y}});
//                 }
//                 else if(sum > pq.top().first) break;
//             }
//         vector<vector<int>>ans;
//         while(!pq.empty()){
//             pair<int,pair<int,int>>front = pq.top();
//             pq.pop();
//             pair<int,int>value = front.second;
//             vector<int>v;
//             v.push_back(value.first);
//             v.push_back(value.second);
//             ans.push_back(v);
//         }
//         return ans;
//     }
// };