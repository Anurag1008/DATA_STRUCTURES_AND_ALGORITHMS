
//https://practice.geeksforgeeks.org/problems/maximum-difference-of-zeros-and-ones-in-binary-string4111/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article

//Maximum difference of zeros and ones in binary string

//using Kadans Algorithm : used to find largest constigious sum in an array..just a bottom up approach in dynamic programming

/*
class Solution{
public:	
    //using Kadan's Algorithms
	int maxSubstring(string S)
	{
	    int maxi = INT_MIN;
	    int sum = 0;
	    for(int i=0;i<S.length();i++){
	        if(S[i] == '0') sum+=1;
	        if(S[i] == '1') sum-=1;
	        maxi = max(sum,maxi);
	        if(sum < 0) sum = 0;
	    }
	    return maxi;
	    
	}
};
*/


