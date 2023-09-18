class Solution {
public:
int calculatecount(vector<int>& arr)
{
    int start = 0 ;
    int end = arr.size()-1;
    while(start<=end)
    {
        int mid = start + (end-start) / 2;
        if(arr[mid]==1)
        {
            start = mid + 1; 
        }
        else
        {
            end = mid - 1;
        }
    }
    return start;
}
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k)
    {
        priority_queue<pair<int,int>, vector<pair<int,int>>> max_heap;
        for(int i =0; i<mat.size();i++)
        {
            max_heap.push({calculatecount(mat[i]),i});
            if(max_heap.size()>k)
            {
                max_heap.pop();
            }
        }
        vector<int>ans;
        while(max_heap.size())
        {
            ans.push_back(max_heap.top().second);
            max_heap.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
