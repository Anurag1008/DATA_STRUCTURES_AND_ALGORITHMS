//2448. Minimum Cost to Make Array Equal
/*
class Solution
{
public:
    long long minCost(vector<int> &nums, vector<int> &cost)
    {
        vector<pair<int, int>> p;
        for (int i = 0; i < nums.size(); i++) p.push_back({nums[i], cost[i]});
        sort(p.begin(), p.end());
        long long ans = 0;
        long long sum = 0;
        for(int i=0;i<nums.size();i++) sum+=(long long)p[i].second;
        long long tot = 0;
        int median = 0;
        int i=0;
        while(tot<(sum+1)/2 && i<cost.size()){
            tot+=(long long)p[i].second;
            median = p[i].first;
            i++;
        }
        for (int j = 0; j < nums.size(); j++) ans += (long long)(abs(p[j].first - median)) * (long long)p[j].second;
        return ans;
    }
};
*/