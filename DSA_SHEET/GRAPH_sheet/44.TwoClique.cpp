#include<iostream>
#include<vector>
using namespace std;

// Two Clique

#include <bits/stdc++.h> 
int f =0;
void isBipatite(int node,int parent,int col,vector<int>&color,vector<vector<int>>&rev){
    color[node] = col;
	for(auto neighbor : rev[node]){
		if(!color[neighbor]){
			isBipatite(neighbor,node,3-col,color,rev);
		}
		else if(neighbor != parent && color[neighbor] == col){
			f=1;
			break;
		}
	}
}

bool twoCliques(int n, vector<vector<int>> &edgeList)
{
	//creating a adj List
    vector<vector<int>>adj(n);
	for(auto it : edgeList){
		if(it[0]!=it[1]){
		adj[it[0]].push_back(it[1]);
		adj[it[1]].push_back(it[0]);}
	}

    //creating a reverse but of those which are not present in the graph.
	vector<vector<int>> revAdj(n);
	vector<int>dummy(n,0);
	for(int i=0;i<n;i++){
		dummy[i] = 1;
        for(auto x : adj[i]) dummy[x] = 1;

		for(int j=0;j<n;j++)
		if(dummy[j] == 0){
            revAdj[i].push_back(j);
			revAdj[j].push_back(i);
		}
		dummy.clear();
	}
	vector<int>color(n,0);
	isBipatite(0,0,1,color,revAdj);
    if(f) return 0;
	return 1;
}