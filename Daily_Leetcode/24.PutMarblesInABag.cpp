//2551. Put Marbles in Bags

//Time Complexity : O(n*log(n))
//Space Complexity : O(n)

/*
class Solution {
public:
    long long putMarbles(vector<int>& weights, int k) {
        vector<int> candidates;

        for(int i=0;i<weights.size()-1;i++) 
            candidates.push_back(weights[i]+weights[i+1]);

        sort(candidates.begin(),candidates.end());
        
        long long min_sum = 0;
        long long max_sum = 0;
        int n = weights.size();

        for(int i=0;i<k-1;i++){
            min_sum += candidates[i];
            max_sum += candidates[n - 2 - i];
        }
        return max_sum - min_sum;
    }
};
*/

//Not used DP because size of input vector array is 10^5 which is very huge and it will get square of if we use DP.