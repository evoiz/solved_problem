#include<bits/stdc++.h>
using namespace std;


using ll = long long;
const int N =  1e5 + 5;
const ll INF = 1e9 + 7;

ll dis[N];
ll vis[N];

int n;
queue < int > q;
vector < int > adj[N];

void bfs(){

    while( !q.empty() ){
        int u = q.front();
        q.pop();

        for(auto v : adj[u]){

            if(vis[v])continue;

            dis[v] = 1 + dis[u];
            vis[v] = 1;
            q.push(v);
        }
    }
}

main(){

    freopen("jumping.in" , "r" , stdin);

    int t;

    scanf("%d" , &t);

    while( t -- ){
        scanf("%d" , &n);

        for(int i = 0 ; i < N ; i ++){
            vis[i] = 0;
            dis[i] = INF;
        }

        dis[n] = 0;
        vis[n] = 1;
        int jump;
        for(int i = 1 ; i <= n ; i ++){
            scanf("%d" , &jump);

            if(i + jump <= n){
                adj[ i + jump ].push_back( i );
                //inDeg[i + jump] ++;
            }

            if(i - jump >= 1){
                adj[ i - jump ].push_back( i );
                //inDeg[i - jump] ++;
            }
        }



        q.push(n);
        bfs();


        for(int i = 1 ; i <= n ; i ++){
            if(dis[i] >= INF)printf("-1\n");
            else printf("%lld\n" , dis[i]);
        }

        for(int i = 0 ; i <= n ; i ++){
            adj[i].clear();
        }

    }

    return 0;
}
