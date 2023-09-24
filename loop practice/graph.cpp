#include<bits/stdc++.h>
using namespace std;
const int N = 13e+5;
int n,e;
bool vis[N];
vector<int>adj[N];
int dist[N];
void dfs(int s){
    vis[s] = true;
    cout<<s<<" ";
    for(auto v : adj[s]){
        if(vis[v] == true) continue;
        else dfs(v);
    }
}
int main(){

    int n,e;
    cin>>n>>e;
    while(e--){
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    dfs(1);



    return 0;
}