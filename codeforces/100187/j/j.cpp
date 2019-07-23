#include<bits/stdc++.h>
using namespace std;

typedef vector < int > vi;
const int N = 2e5 + 5;

int n , k , x;

vi adj[N];
bool vis[N];
int a[N];

queue < int > q;

void bfs()
{
    vis[1] = 1;
    q.push(1);

    while( !q.empty() )
    {
        int u = q.front();
        q.pop();

        for(auto v : adj[u])
        {
            if(vis[v])continue;

            vis[v] = 1;
            q.push(v);
        }
    }
}

main()
{
    scanf("%d" , &n);

    for(int i = 1 ; i <= n ; i ++)
        scanf("%d" , &a[i]);

    scanf("%d" , &k);

    int v;
    for(int i = 1 ; i <= k ; i ++)
        for(int u = 1 ; u <= n ; u ++)
    {
        scanf("%d" , &v);

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    scanf("%d" , &x);

    bfs( );

    for(int i = 1 ; i <= n ; i ++)
        if(a[i] == x)
            if(vis[i])
    {
        printf("YES\n");
        return 0;
    }

    printf("NO\n");
}
