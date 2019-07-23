#include<bits/stdc++.h>
using namespace std;

const int N = 1100;

int n;
vector < int > adj[N];

main()
{
    scanf("%d" ,&n);

    int u , v;
    for(int i=0;i<n-1;i++)
    {
        scanf("%d%d" ,&u ,&v);
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int cnt = 0;

    for(int i=1;i<=n;i++)
        if(adj[i].size() == 1)cnt ++;

        if(n == 2)cnt = 1;
    printf("%d\n" ,cnt);
}
