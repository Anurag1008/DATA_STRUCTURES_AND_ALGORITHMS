//https://practice.geeksforgeeks.org/problems/finding-the-numbers0215/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article

//Non Repeating Numbers

/*
class Solution
{
public:
    vector<int> singleNumber(vector<int> nums) 
    {
        int n = nums.size();
        
        vector<int>ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-1;++i){
            if((nums[i]^nums[i+1])!=0){ 
                ans.push_back(nums[i]);
            }
            else{
                i+=1;
            }
        }
        if(nums[n-1]!=nums[n-2])
        ans.push_back(nums[n-1]);
        
        return ans;
    }
};
*/