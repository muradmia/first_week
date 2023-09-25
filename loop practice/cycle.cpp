#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 3;
int parent[N];
int parent_size[N];
void dsu_set(int n)
{
    for (int i=1; i<=n ; i++)
    {
        parent[i]=-1;
        parent_size[i]=0;
    }
}
int dsu_find (int node)
{
    while(parent[node] != -1)
    {
        node = parent[node];
    }
    return node;
}

void dsu_union(int a, int b)
{
    int leaderA = dsu_find(a);
    int leaderB = dsu_find(b);
    if(leaderA != leaderB)
    {
        if(parent_size[leaderA] > parent_size[leaderB])
        {
            parent[leaderB]= leaderA;

        }
        else if(parent_size[leaderA]< parent_size[leaderB])
        {
            parent[leaderA]= leaderB;
        }
        else{
            parent[leaderB] = leaderA;
            parent_size[leaderA]++;
        }

    }
}


int main()
{
    int n, m;
    cin >> n >> m;
    int cnt = 0;
    dsu_set(n);
    while (m--)
    {
        int a, b;
        cin >> a >> b;
        int leaderA = dsu_find(a);
        int leaderB = dsu_find(b);
        if (leaderA == leaderB)
        {
            cnt++;
        }
        else
        {
            dsu_union(a, b);
        }
    }
    cout << cnt << endl;
    return 0;
}