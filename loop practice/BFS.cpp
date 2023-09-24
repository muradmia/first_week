#include<bits/stdc++.h>
using namespace std;
const int N = 13e+5;
vector<int>adj[N];
bool vis[N];
int dist[N];
void bfs(int s){
    queue<int>q;
    q.push(s);
    dist[s] = 0;

    while(!q.empty()){
        int parent = q.front();
        q.pop();

    }
}
int main(){

    cout<<"hello world";
    int n,e;
    cin>>n>>e;
    while(e--){
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    bfs(1);


    return 0;
}