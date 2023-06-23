#include<iostream>
#include<unordered_map>
#include<list>
using namespace std;
class Graph
{
public:
    unordered_map<int,list<int>>adj;
    void addEdge(int u,int v,bool direction)
    {   //0 represent undirected graph
        //1 represent directed graph
        //edge from u to v
        adj[u].push_back(v);

        if(direction==0)
        adj[v].push_back(u);
    }
    void printAdjList()
    {
        for(auto i:adj)
        {
            cout<<i.first<<"-> ";
            for(auto j: i.second)
            {
                cout<<j<<", ";
            }
            cout<<endl;
        }
    }
};


int main()
{
    Graph g;
    int nodes;
    cout<<"Enter number of nodes: "<<endl;
    cin>>nodes;

    int edges;
    cout<<"Enter number of edges: "<<endl;
    cin>>edges;

    for(int i=0;i<edges;i++)
    {
        int u,v;
        cin>>u>>v;
        g.addEdge(u,v,0);
    }
    
    g.printAdjList();
    return 0;
}