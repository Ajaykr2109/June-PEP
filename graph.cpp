#include<iostream>
#include<bits/stdc++.h>
usng namespace std;

int main()
{
    int v,e;
    cin>>v>>e;
    vector<vector<int>> graph(v,vector<int>(v,0));

    for(int i=0;i<e;i++)
    {
        int u,v;
        cin>>u>>v;
        graph[u][v]=1;
        graph[v][u]=1;
    }



    return 0;
}