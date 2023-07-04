
//using Hashmap

//Time complexity : O(N)
//space complexity : O(N)

/*
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int>mp;
        for(auto it : nums) mp[it]++;
        for(auto it = mp.begin();it!=mp.end();it++) if(it->second == 1) return it->first;
        return 0;
    }
};
*/

//Bitmanipulation and bitmasking

//Time complexity : O(32*N) = O(N)
//space complexity : O(1)

/*
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        //using bit manipulation
        int ans{0};
        for(int i=0;i<32;i++){
            int sum = 0;
            for(int j=0;j<nums.size();j++){
                if((nums[j] >> i)&1 == 1){
                    sum++;
                }
            }
            sum %= 3;
            if(sum != 0)
            ans |= sum<<i;
        }
        return ans;
    }
};
*/

//more optamised

//Time complexity : O(N)
//space complexity : O(1)

/*
class Solution {
 public:
  int singleNumber(vector<int>& nums) {
    int ones = 0;
    int twos = 0;

    for (const int num : nums) {
      ones ^= (num & ~twos);
      twos ^= (num & ~ones);
    }

    return ones;
  }
};
*/

