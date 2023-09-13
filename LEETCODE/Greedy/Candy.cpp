/*
class Solution {
public:
    //using two pass method
    int candy(vector<int>& ratings) {
        int n = ratings.size();
        vector<int>candies(n,1);
        
        for(int i=1;i<ratings.size();i++)
            if(ratings[i-1]<ratings[i]) 
                candies[i]=candies[i-1]+1;

        for(int i = n-2;i>=0;i--) 
            if(ratings[i]>ratings[i+1]) 
                candies[i] = max(candies[i],candies[i+1]+1);

        int ans = 0;
        for(auto sum : candies) ans+=sum;

        return ans;
    }
};
*/