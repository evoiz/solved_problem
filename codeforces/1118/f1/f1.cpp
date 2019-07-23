#include<bits/stdc++.h>
using namespace std;

const int N = 3e5 + 5;

vector < int > adj[N];
vector < pair < int , int > > edges;

int n;
int a[N];
int in[N] , out[N];
int timer = 0;
pair < int , int > colors[N];

void dfs(int u , int p){
    in[u] = ++ timer;

    if(a[u] == 1)colors[timer].first = 1;
    else if(a[u] == 2)colors[timer].second = 1;

    for(auto v : adj[u]){
        if(v != p){
            dfs(v , u);
        }
    }

    out[u] = timer;
}

main(){
    scanf("%d" , &n);

    int u , v;
    for(int i = 1 ; i <= n ; i ++){
        scanf("%d" , &a[i]);
    }

    for(int i = 1 ; i < n ; i ++){
        scanf("%d %d" , &u , &v);
        adj[u].push_back(v);
        adj[v].push_back(u);
        edges.push_back( {u , v} );
    }


    dfs(1 , 0);

    colors[0] = {0 , 0};
    for(int i = 1 ; i <= n ; i ++){
        colors[i].first  += colors[i-1].first;
        colors[i].second += colors[i-1].second;
    }

    int ans = 0;
    for(auto E : edges){
        int u = E.first;
        int v = E.second;
        if(in[u] > in[v])swap(u , v);
        pair < int , int > U = colors[n] , V;
        V = {0 , 0};

        V.first  = colors[out[v]].first  - colors[in[v]-1].first;
        V.second = colors[out[v]].second - colors[in[v]-1].second;

        U.first  = colors[n].first  - V.first;
        U.second = colors[n].second - V.second;

        if( ((U.first == 0) || (U.second == 0)) && ((V.first == 0 || V.second == 0)) ){
            ans ++;
        }

    }

    printf("%d\n" , ans);
}