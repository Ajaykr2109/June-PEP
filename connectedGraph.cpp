//cycle detection in a graph
#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

bool detect_cycle(vector<vector<int>>&g,int v){

    vector<bool>visited(v,false);
    vector<bool>rec_stack(v,false);
    for(int i=0;i<v;i++){
        if(detect_cycle_util(g,i,visited,rec_stack))
            return true;
    }
    return false;

}

int shortest_path(vector<vector<int>>&g,int v){
    vector<int>dist(v,INT_MAX);
    dist[0]=0;
    for(int i=0;i<v;i++){
        for(int j=0;j<v;j++){
            if(g[i][j]==1 && dist[j]>dist[i]+1){
                dist[j]=dist[i]+1;
            }
        }
    }
    return dist[v-1];
}


 


int main()
{
    int v,e;
    cin>>v>>e;
    vector<vector<int>> graph(v,vector<int>(v,0));
    for(int i=0;i<e;i++){
        int u,v;
        cin>>u>>v;
        graph[u][v]=1;
        graph[v][u]=1;
    }
    if(detect_cycle(graph,v))
        cout<<"cycle";
    else
        cout<<"no cycle";
        
    return 0;
}