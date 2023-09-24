#include<bits/stdc++.h>
using namespace std;
int parent[10000];
int parent_size[10000];
void dsu_set(int n){
    for(int i = 1;i <= n;i++){
        parent[i] = -1;
        parent_size[i] = 0;
    }
}

int dsu_find(int node){
    while(parent[node] != -1){
        node = parent[node];
    }
    return node;
}

void dsu_union(int a,int b)
{
    int leaderA = dsu_find(a);
    int leaderB = dsu_find(b);

    if(leaderA != leaderB){
        if(parent_size[leaderA] > parent_size[leaderB]){
            parent[leaderB] = leaderA;
            parent_size[leaderA]+=parent_size[leaderB];
        }else if(parent_size[leaderB] > parent_size[leaderA]){
            parent[leaderA] = leaderB;
            parent_size[leaderB]+=parent_size[leaderA];
        }else{
            parent[leaderB] = leaderA;
            parent[leaderA]++;
        }
    }
}
int main(){

    int n,e;
    cin>>n>>e;
    dsu_set(n);
    while(e--){
        int a,b;
        cin>>a>>b;
        int leaderA = dsu_find(a);
        int leaderB = dsu_find(b);

        if(leaderA == leaderB){
            cout<<"Cycle detect !! "<<a<<" "<<b;
        }else{
            dsu_union(a,b);
        }

    }


    return 0;
}