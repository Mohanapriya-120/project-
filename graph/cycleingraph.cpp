#include<bits/stdc++.h> 
using namespace std; 
struct Graph 
{ 
    int node;  
    list<int> *lst;  
    int fn(int v,int visited[],int *rs);  
    Graph(int node);   
    void addEdge(int v,int w);   
    int cycle();    
};
int Graph::cycle() 
{ 
    int *visited = new int[node]; 
    int *entry = new int[node]; 
    for(int i=0;i<node;i++) 
    { 
        visited[i]=0; 
        entry[i]=0; 
    } 
    for(int i=0;i<node;i++) 
        if (fn(i,visited,entry)) 
            return 1; 
    return 0; 
} 
int Graph::fn(int v,int visited[],int *entry) 
{ 
    if(visited[v]==0) 
    { 
        visited[v] = 1; 
        entry[v] = 1; 
        list<int>::iterator i; 
        for(i=lst[v].begin();i!= lst[v].end();++i) 
        { 
            if (!visited[*i] && fn(*i,visited,entry)) 
                return 1; 
            else if (entry[*i]) 
                return 1; 
        } 
    } 
    entry[v]=0;
    return -1; 
}  
Graph::Graph(int node) 
{ 
    this->node=node; 
    lst=new list<int>[node]; 
} 
void Graph::addEdge(int a,int ele) 
{ 
    lst[a].push_back(ele); 
} 
int main() 
{ 
int n,e;
cin >> n >> e;
    Graph g(n); 
    int a,b;
    for(int i=0;i<e;i++)
    {
    	cin >> a >> b;
    	g.addEdge(a,b); 
	}
    if(g.cycle()) 
        cout << "cycle"; 
    else
        cout << "no cycle"; 
    return 0; 
}
