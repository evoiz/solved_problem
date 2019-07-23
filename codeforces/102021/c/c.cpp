#include<bits/stdc++.h>
using namespace std;

typedef pair < int , int > ii;
typedef vector < ii > vii;
const int N = 1010;

int inDeg[N] , outDeg[N];
int mx[N];
vii adj[N];

queue < int > q;

main(){
    int n , m;

    scanf("%d %d" , &n , &m);

    int u , v , w;
    for(int i = 0 ; i < m ; i ++){
        scanf("%d %d %d" , &u , &v , &w);

        adj[u].push_back({w , v});
        inDeg[v] ++;
    }

    for(int i = 1 ; i <= n ; i ++){
        if(inDeg[i] == 0)q.push(i);
    }

    int ans = 0;
    while( !q.empty() ){
        u = q.front();
        q.pop();

        ans = max(mx[u] , ans);
        for(auto A : adj[u]){
            int v = A.second;
            int w = A.first;

            mx[v] = max(mx[v] , w + mx[u]);
            inDeg[v] --;
            if(inDeg[v] == 0)q.push(v);
        }
    }

    printf("%d\n" , ans);
}
