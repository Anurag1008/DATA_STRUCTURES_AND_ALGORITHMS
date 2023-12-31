/*
2616.Minimize the Maximum Difference of Pairs

*** Brilliant Question ***

//Dp solution giving MLE (memory limit excided)

class Solution {
public:
    int fn(int i,vector<int>&nums,int p,vector<vector<int>>&dp){
        if(p==0) return 0;
        if(dp[i][p]!=-1) return dp[i][p];
        if( i >= nums.size()-1) return 1e9;
        return dp[i][p] = min(fn(i+1,nums,p,dp),max(abs(nums[i]-nums[i+1]),fn(i+2,nums,p-1,dp)));
    }
    int minimizeMax(vector<int>& nums, int p) {
        vector<vector<int>>dp(nums.size()+1,vector<int>(p+1,-1));
        sort(nums.begin(),nums.end());
        return fn(0,nums,p,dp);
    }
};

//Binary search solution
class Solution {
public:
    int check(vector<int>&nums,int m,int p)
    {
        int i=0;
        while(i<nums.size()-1)
        {
            if(abs(nums[i]-nums[i+1])<=m)
            {
                p--;
                i=i+2;
            }
            else
            i++;
            
        }
        return p<=0?1:0;
    }
    int minimizeMax(vector<int>& nums, int p) {
        sort(nums.begin(),nums.end());
        int i=0;
        int j=nums[nums.size()-1];
        int ans=-1;

        while(i<=j)
        {
            int m=(i+j)>>1;
            if(check(nums,m,p))
            {
                ans=m;
                j=m-1;
            }
            else
            {
                i=m+1;
            }
        }
        return ans;
    }
};


//More understandable Solution
class Solution {
public:
    // Find the number of valid pairs by greedy approach
    int countValidPairs(vector<int>& nums, int threshold) {
        int index = 0, count = 0;
        while (index < nums.size() - 1) {
            // If a valid pair is found, skip both numbers.
            if (nums[index + 1] - nums[index] <= threshold) {
                count++;
                index++;
            }
            index++;
        }
        return count;
    }

    int minimizeMax(vector<int>& nums, int p) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int left = 0, right = nums[n - 1] - nums[0];

        while (left < right) {
            int mid = (left+right) >> 1;

            // If there are enough pairs, look for a smaller threshold.
            // Otherwise, look for a larger threshold.
            if (countValidPairs(nums, mid) >= p) {
                right = mid;
            } else {
                left = mid + 1;
            }
        }
        return left;
    }
};
*/