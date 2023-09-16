//https://practice.geeksforgeeks.org/problems/find-maximum-equal-sum-of-three-stacks/1

/*
class Solution{
public:
    int maxEqualSum(int N1,int N2,int N3,vector<int> &s1,vector<int> &s2,vector<int> &s3){
        int sum1 = 0;
        int sum2 = 0;
        int sum3 = 0;
        
        for(auto it : s1) sum1+=it;
        for(auto it : s2) sum2+=it;
        for(auto it : s3) sum3+=it;
        
        if(sum1 == sum2 && sum2 == sum3) return sum1;
        int i=0,j=0,k=0;
        
        while(i<N1 && j<N2 && k<N3){
            
            if(sum1 == sum2 && sum2 == sum3) return sum1;
            
            if(sum1 >= sum2 && sum1 >= sum3){
                sum1-=s1[i];
                i++;
            }
            else if(sum2 >= sum1 && sum2 >= sum3){
                sum2-=s2[j];
                j++;
            }
            else if(sum3 >= sum1 && sum3 >= sum2){
                sum3-=s3[k];
                k++;
            }
        }
        
        return 0;
    }
};
*/