
//239. Sliding Window Maximum

/*
//using Sliding Window approach
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int>ans;
        int s=0;
        for(int i=k-1;i<nums.size();i++){
            int maxi = INT_MIN;
            for(int j=s;j<=i;j++){
                maxi=max(maxi,nums[j]);
            }
            ans.push_back(maxi);
            s++;
        }
        return ans;
    }
};


//using priority queue

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int>ans;
        priority_queue<pair<int,int>>pq;
        for(int i=0;i<nums.size();i++){
            pq.push({nums[i],i});
            if(i>=(k-1)){
                while(i-pq.top().second >= k) pq.pop();
                ans.push_back(pq.top().first);
            }
        }
        return ans;
    }
};
*/