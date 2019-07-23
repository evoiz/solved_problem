#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;

vector < int > adj[N];
int sz[N];

int dfs(int u , int p){
    sz[u] = 1;
    for(auto v : adj[u])
        if(v != p)
            sz[u] += dfs(v , u);
    return sz[u];
}

main(){
    int n , k;

    scanf("%d %d" , &n , &k);
    if(n % k != 0){
        printf("No\n");
        return 0;
    }

    int SZ = n / k;

    for(int i = 1 ; i < n ; i ++){
        int u , v;
        scanf("%d %d" , &u , &v);

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    dfs(1 , 0);

    int cnt = 0;
    for(int i = 1 ; i <= n ; i ++){
        if(sz[i] % SZ == 0){
            cnt ++;
        }
    }

    if(cnt == k){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }

}
