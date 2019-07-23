#include<bits/stdc++.h>
using namespace std;

using ll = long long;

typedef pair < int , int > ii;
typedef vector < int > vi;
typedef vector < ii > vii;
const int N = 1e5 + 5;
const ll INF = 1e12;

vi adj[N] , Tree[N];
vii br;
int low[N] , dfn[N] , timer = 0;
int p[N];

int get(int x){
    if(x == p[x])return x;
    return  p[x] = get(p[x]);
}

void join(int x , int y){
    x = get(x);
    y = get(y);

    if(x == y)return;

    if(rand() & 1)swap(x , y);

    p[x] = y;
    return;
}

void dfs(int u , int p){
    low[u] = dfn[u] = ++ timer;

    for(auto v : adj[u]){
        if(dfn[v] == 0){
            dfs(v , u);

            if(dfn[u] < low[v]){
                br.push_back({u , v});
            }
            else {
                join(u , v);
            }

            low[u] = min(low[u] , low[v]);
        }
        else if(v != p){
            join(u , v);
            low[u] = min(low[u] , dfn[v]);
        }
    }
}

bool done[N];
int vis[N];
int dis[N];
int color = 0;
queue < int > q;

int bfs(int u){

    dis[u] = 0;
    vis[u] = ++ color;
    q.push(u);

    while( !q.empty() ){
        u = q.front();
        q.pop();

        done[u] = 1;
        for(auto v : Tree[u]){
            if(vis[v] == color)continue;

            vis[v] = color;
            dis[v] = 1 + dis[u];
            q.push(v);
        }
    }

    return u;
}

main(){

    for(int i = 0 ; i < N ; i ++)p[i] = i;

    int t;

    scanf("%d" , &t);

    while( t -- ){

        int n , m;

        scanf("%d %d" , &n , &m);

        for(int i = 0 ; i < m ; i ++){
            int u , v;

            scanf("%d %d" , &u , &v);

            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        for(int i = 1 ; i <= n ; i ++){
            if(dfn[i] == 0){
                dfs(i , 0);
            }
        }

        for(auto B : br){

            int u = B.first;
            int v = B.second;

            u = get(u);
            v = get(v);


            Tree[u].push_back(v);
            Tree[v].push_back(u);
        }

        int mx = 0;
        for(int i = 1 ; i <= n ; i ++){
            if(!done[i]){
                mx = max(mx , dis[ bfs( bfs( i ) ) ]);
            }
        }

        printf("%d\n" , br.size() - mx);

        for(int i = 0 ; i <= n ; i ++){
            adj[i].clear();
            Tree[i].clear();

            p[i] = i;
            low[i] = dfn[i] = vis[i] = done[i] = 0;
        }
        color = 0;
        timer = 0;
        br.clear();
    }
    return 0;
}
