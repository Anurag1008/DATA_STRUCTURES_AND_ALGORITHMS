//https://practice.geeksforgeeks.org/problems/smallest-sum-contiguous-subarray/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article

//Smallest sum contiguous subarray

/*
class Solution{
  public:
  int smallestSumSubarray(vector<int>& a){
      //using kadan's algorithm
      
      int sum = a[0];
      int ans = a[0];
      for(int i=1;i<a.size();i++){
          sum = min(a[i],sum+a[i]);
          ans = min(ans,sum);
      }
      return ans;
  }
};

*/