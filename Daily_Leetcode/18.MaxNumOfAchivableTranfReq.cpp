//1601. Maximum Number of Achievable Transfer Requests

//Using on method of include and notInclude

//Time Complexity : O(2^M * N)   : N number of build : M number of requests
//Space Complexity : O(N + M)

/*
class Solution {
public:
    int ans = 0;

    void helper(int start, vector<vector<int>>& requests, vector<int>& indegree, int n, int count) {
        if (start == requests.size()) {
            for (int i = 0; i < n; i++) {
                if (indegree[i] != 0) {
                    return;
                }
            }
            ans = max(ans, count);
            return;
        }

        // Take 
        indegree[requests[start][0]]--;
        indegree[requests[start][1]]++;
        helper(start + 1,requests, indegree, n, count + 1);

        // Not-take
        indegree[requests[start][0]]++;
        indegree[requests[start][1]]--;
        helper(start + 1,requests, indegree, n, count);
    }
    
    int maximumRequests(int n, vector<vector<int>>& requests) {
        vector<int> indegree(n, 0);
        helper(0, requests, indegree, n, 0);
        return ans;
    }
};
*/

//Using Bitmasking -> making subset and removing recursion

//Time Complexity : O(2^M * N)   : N number of build : M number of requests
//Space Complexity : O(N)

/*
class Solution {
public:
    int maximumRequests(int n, vector<vector<int>>& requests) {
        int answer = 0;
        int size = requests.size();
        //calculate number of subset we can create 1<<size_Of_Request
        for(int subset=0;subset<(1<<size);subset++){
            vector<int>indegree(n,0); //number of building
            int pos = size-1;
            
            //Number of set bits representing the requests we will consider.
            int bitCount = __builtin_popcount(subset);

            if(bitCount <= answer) continue;

            //For all 1's in the number,update the array indegree for building it involves;
            for(int curr = subset;curr > 0;curr>>=1,pos--){
                if(curr & 1){
                    indegree[requests[pos][0]]--;
                    indegree[requests[pos][1]]++;
                }
            }
            int flag = 1;
            for(int i=0;i<n;i++){
                if(indegree[i]){
                    flag = 0;
                    break;
                }
            }
            if(flag){
                answer = bitCount;
            }
        }
        return answer;
    }
};
*/