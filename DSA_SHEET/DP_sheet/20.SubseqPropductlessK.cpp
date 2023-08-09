/*
https://practice.geeksforgeeks.org/problems/number-of-subsets-with-product-less-than-k/1

Number of subsets with product less than k

class Solution {
  public:
    int solve(int i, int n, int k, int arr[]){
        if(i >= n){
            if(k > 0){
                return 1;
            }
            return 0;
        }
        
        int take = 0;
        if(arr[i] <= k){
            take = solve(i+1, n, k/arr[i], arr);
        }
        
        int skip = solve(i+1, n, k, arr);
        
        return skip+take;
    }
  
    int numOfSubsets(int arr[], int n, int k) {
        return solve(0, n, k, arr)-1;
    }
};

*/