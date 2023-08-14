
//Minimum number of jumps


/*
class Solution{
  public:
    int minJumps(int arr[], int n){
        
        int jumps = 0;
        int maxi = 0;
        int pos = 0;
        for(int i=0;i<n-1;i++){
            
            maxi = max(maxi,i+arr[i]);
            
            if( pos == i){
                pos = maxi;
                jumps++;
            }
            
            if(maxi <= i) return -1;
            
        }
        return jumps;
    }
};
*/

//Recurrsion

/*
class Solution {
public:
    int minJumps(int arr[], int n) {
        if (n <= 1)
            return 0;

        if (arr[0] == 0)
            return -1;

        return jumpRecursive(arr, n, 0);
    }

    int jumpRecursive(int arr[], int n, int pos) {
        if (pos >= n - 1)
            return 0;

        if (arr[pos] == 0)
            return -1;

        int minJumps = INT_MAX;
        for (int i = 1; i <= arr[pos]; ++i) {
            int nextPos = pos + i;
            int jumps = jumpRecursive(arr, n, nextPos);
            if (jumps != -1)
                minJumps = min(minJumps, 1 + jumps);
        }

        return (minJumps == INT_MAX) ? -1 : minJumps;
    }
};

//Memorization solution

/*

class Solution {
public:
    vector<int> memo;

    int minJumps(int arr[], int n) {
        if (n <= 1)
            return 0;

        if (arr[0] == 0)
            return -1;

        memo.assign(n, -1); // Initialize memoization table
        return jumpRecursive(arr, n, 0);
    }

    int jumpRecursive(int arr[], int n, int pos) {
        if (pos >= n - 1)
            return 0;

        if (arr[pos] == 0)
            return -1;

        if (memo[pos] != -1)
            return memo[pos];

        int minJumps = INT_MAX;
        for (int i = 1; i <= arr[pos]; ++i) {
            int nextPos = pos + i;
            int jumps = jumpRecursive(arr, n, nextPos);
            if (jumps != -1)
                minJumps = min(minJumps, 1 + jumps);
        }

        memo[pos] = (minJumps == INT_MAX) ? -1 : minJumps;
        return memo[pos];
    }
};


*/

*/