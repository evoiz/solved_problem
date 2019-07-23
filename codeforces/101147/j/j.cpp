#include<bits/stdc++.h>
using namespace std;

using ll = long long;
typedef pair < ll , int > li;
const int N = 5e5 + 5;

queue < li > q;

vector < li > adj[N];
int p[N];
li to[N];
int ans[N];

void dfs(int u , int pr , ll W){
    to[u] = {W , pr};

    for(auto A : adj[u]){
        int v = A.second;
        ll  w = A.first;

        if(v != pr){
            dfs(v , u , w);
        }
    }
}

main(){
    
    freopen("car.in" , "r" , stdin);
    
    int t;
    scanf("%d" , &t);

    while( t -- ){
        int n;

        scanf("%d" , &n);


        ll x;
        for(int i = 1 ; i <= n ; i ++){
            scanf("%lld" , &x);
            q.push({x , i});
        }

        for(int i = 1 ; i < n ; i ++){
            int u , v;
            ll w;
            scanf("%d %d %lld" , &u , &v , &w);

            adj[u].push_back({w , v});
            adj[v].push_back({w , u});

        }

        dfs(1 , 0 , 0ll);

        while(!q.empty()){
            int u = q.front().second;
            ll  d = q.front().first;
            q.pop();

            ll   w = to[u].first;
            int pr = to[u].second;

            if(pr == 0)continue;

            d -= w;

            if(d >= 0){
                ans[pr] ++;
                q.push({d , pr});
            }
        }

        for(int i = 1 ; i <= n ; i ++){
            printf("%d%c" , ans[i] , i == n ? '\n' : ' ');
        }

        for(int i = 0 ; i <= n ; i ++){
            adj[i].clear();
            to[i]  = {0 , 0};
            ans[i] = 0;
        }

    }

    return 0;
}
