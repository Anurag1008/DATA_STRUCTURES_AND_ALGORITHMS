
//UNION FIND ALGORITHMS

//Do check set 2 gfgfor rank and path compression and make the complexity O(E*log(V) ) or amortized time complexity is O(α(n)).
//where α(n) is the inverse Ackermann function, which grows very steadily (it does not even exceed for n<10600  approximately).

//https://practice.geeksforgeeks.org/problems/detect-cycle-using-dsu/1

/*
class Solution
{
    public:
    int find(vector<int>&parent,int i){
        if(parent[i] == i) return i;
        return find(parent,parent[i]);
    }
    
    void Union(vector<int>&parent,int x,int y){
        parent[x] = y;
    }
    
	int detectCycle(int V, vector<int>adj[])
	{
	    vector<int>parent(V);
	    for(int i = 0;i<V;i++) parent[i] = i;
	    
	    for(int i=0;i<V;i++){
	        for(auto j : adj[i]){
	            int x = find(parent,i);
	            int y = find(parent,j);
	        
	            if(x == y && i < y) return 1;
	            else
	               Union(parent,x,y);
	        }
	    }
	    
	    return 0;
	}
};
*/