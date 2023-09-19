

class Solution {
public:
    long long helper(int i,long long p_idx,vector<int>&nums){
        if(i>=nums.size()) return 0;
        int take = 0;
        int not_take = 0;
        if(isPerfectSquare(p_idx * (i+1))) take = nums[i] + helper(i+1,p_idx * (i+1),nums),cout<<"take when index is : "<<i<<" "<<take<<endl;
        not_take = helper(i+1,p_idx,nums);
        cout<<"not take when index is : "<<i<<" "<<not_take<<endl;
        return max(take,not_take);
    }
    bool isPerfectSquare(long long num){
        long long sr = sqrt(num);
        if(num == sr*sr) return true;
        return false;
    }
    long long maximumSum(vector<int>& nums) {
        //calcualae the number of subset with product of indices is a perfect square
        return helper(0,1,nums);
        
        //functionn to calulate a perfect square.
    }
};

int main(){

    return 0;
}