#include<bits/stdc++.h>
using namespace std;

typedef pair < int , int > ii;
typedef pair < int , ii > i3;
typedef vector < int > vi;
typedef vector < ii > vii;
typedef vector < i3 > vi3;
const int N = 555 , M = 1e6+4 , L = 20;

int n , m , q;
int   p[M];
int  MX[M][L];
int  to[M][L];
int num[N][N];
int   a[N][N];
vi3 edges;

vii adj[M];
int dep[M];

int get(int x){
    if(x == p[x])return x;
    return  p[x] = get(p[x]);
}

bool join(int x , int y){
    x = get(x);
    y = get(y);

    if(x == y)return false;

    if(rand() & 1)swap(x , y);
    p[x] = y;
    return true;
}

int mx_edge(int u , int v){

    int mx = 0;
    if(u == v)return mx;

    if(dep[u] < dep[v])swap(u , v);

    int k = dep[u] - dep[v];

    // while jumping take the mx with you
    for(int i = 0 ; i < L ; i ++){
        if(k & (1 << i)){
            mx = max(mx , MX[u][i]);
            u  =  to[u][i];
        }
    }

    if(u == v)return mx;

    for(int i = L-1 ; i >= 0 ; i --){
        if(to[u][i] != to[v][i]){
            mx = max(mx , MX[u][i]);
            mx = max(mx , MX[v][i]);

            u = to[u][i];
            v = to[v][i];
        }
    }

    mx = max(mx , MX[u][0]);
    mx = max(mx , MX[v][0]);

    return mx;
}

int dx[] = {1 , -1 , 0,  0};
int dy[] = {0 , 0 ,  1 ,-1};


void dfs(int u , int p , int w){
      dep[u] = 1 + dep[p];
    MX[u][0] = w;
    to[u][0] = p;

    for(auto A : adj[u]){
        int v = A.second;
        int w = A.first;

        if(v != p)
            dfs(v , u , w);
    }
}

bool inside(int x , int y){
    return x >= 1 && x <= n && y >= 1 && y <= m;
}

main(){

    memset(MX , 0 , sizeof MX);
    memset(to , 0 , sizeof to);
    memset(dep , 0 , sizeof dep);
    memset(num , 0 , sizeof num);
    edges.clear();

    scanf("%d %d %d" , &n , &m , &q);

    int cnt = 0;
    p[0] = 0;
    for(int i = 1 ; i <= n ; i ++){
        for(int j = 1 ; j <= m ; j ++){
            scanf("%d" , &a[i][j]);

            num[i][j] = ++ cnt;
               p[cnt] =    cnt;
        }
    }

    for(int i = 1 ; i <= n ; i ++){
        for(int j = 1 ; j <= m ; j ++){
            for(int k = 0 ; k < 4 ; k ++){

                int ni = i + dx[k];
                int nj = j + dy[k];

                if(!inside(ni , nj))continue;

                int u = num[i][j];
                int v = num[ni][nj];
                int w = max(a[i][j] , a[ni][nj]);

                edges.push_back({w , {u , v} });
            }
        }
    }

    sort(edges.begin() , edges.end());

    for(auto E : edges){
        int u = E.second.first;
        int v = E.second.second;

        int w = E.first;

        if(join(u , v)){
            adj[u].push_back({w , v});
            adj[v].push_back({w , u});
        }
    }



    dfs(1 , 0 , 0);

    for(int lg = 1 ; lg < L ; lg ++){
        for(int i = 1 ; i <= cnt ; i ++){
            to [i][lg] =                         to[ to[i][lg - 1] ][lg - 1];
            MX [i][lg] = max(MX[i][lg - 1]    ,  MX[ to[i][lg - 1] ][lg - 1]);
        }
    }

    for(int i = 1 ; i <= q ; i ++){
        int x1 = 0 , y1 = 0 , x2 = 0, y2 = 0;
        scanf("%d %d %d %d" , &x1 , &y1 , &x2 , &y2);

        if((x1 == x2) && (y1 == y2) ){
            printf("%d\n" , a[x1][y1]);
            continue;
        }

        int u = num[x1][y1];
        int v = num[x2][y2];

        printf("%d\n" , mx_edge(u , v));
    }

    return 0;
}
