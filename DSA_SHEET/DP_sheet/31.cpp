
//https://leetcode.com/problems/removing-minimum-and-maximum-from-array/

//2091. Removing Minimum and Maximum From Array


/*
class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        if(n==1) return 1;
        if(n==2) return 2;
        int smaller = INT_MAX;
        int iS = 0;
        int iL = 0;
        int larger = INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(nums[i] < smaller){
                iS = i;
                smaller = nums[i];
            }
            if(nums[i] > larger){
                iL = i;
                larger = nums[i];
            }
        }
    
        int front = max(iS,iL)+1;
        int back = n - min(iS,iL);
        int frontback = (min(iS,iL)+1) + (n-max(iS,iL));

        return min(back,min(front,frontback));
    }
};
*/