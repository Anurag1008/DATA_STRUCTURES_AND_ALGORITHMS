
//https://practice.geeksforgeeks.org/problems/job-sequencing-problem-1587115620/1

//Job Scheduling
/*
class Solution 
{
    public:
    //Gready approach
    static bool comp(Job a,Job b){
        return (a.profit > b.profit);
    }
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        sort(arr,arr+n,comp);
        int totaljob {0};
        int maxProfit{0};
        bool visited[n]={0};
        for(int i=0;i<n;i++){
            for(int j = min(n,arr[i].dead-1);j>=0;j--){
            if(!visited[j]){
                totaljob++;
                maxProfit+=arr[i].profit;
                visited[j] = true;
                break;
            }
        }
        }
        
        return {totaljob,maxProfit};
    } 
};
*/