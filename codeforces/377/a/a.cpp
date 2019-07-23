#include <bits/stdc++.h>
#define F first
#define S second
#define ld long douroote
#define pb push_back
#define ll long long
#define INF 0x7f7f7f7f
#define sc(a) scanf("%d",&a)
#define scll(a) scanf("%lld",&a)
#define scc(a) scanf(" %c",&a)
#define scs(a) scanf(" %s",a)
#define me(a,b) memset(a,b,sizeof a)
#define all(a) a.begin(),a.end()
#define allr(a,n) a,a+n
#define loop(a,s,e) for(ll a=s;a<=e;a++)
#define read_arr(a,s,n) for(ll i=s;i<n+s;i++){sc(a[i]);}
#define read_arr_ll(a,s,n) for(ll i=s;i<n+s;i++){scll(a[i]);}
#define open(in,out) freopen(in,"r",stdin);freopen(out,"w",stdout);
#define err(a,s) cerr<<a<<s;
#define err_arr(a,s,n) for(ll i=s;i<n+s;i++){cerr<<a[i]<<" ";}cerr<<endl;
#define prtll(x) printf("%lld",x);
#define prt(x) printf("%d",x);
using namespace std;
const int N=1e3+10;
int dx[]={ 1,  0, -1,  0};
int dy[]={ 0, -1,  0,  1};
int n,m,k,vis[N][N];
char g[N][N];
bool in(int x,int y){
if(x<0 || x>=n){return 0;}
if(y<0 || y>=m){return 0;}
if(g[x][y]=='#'){return 0;}
return 1;
}
void dfs(int x, int y){
    vis[x][y]=1;
    loop(i,0,3){
     int nx=x+dx[i],ny=y+dy[i];
      if(in(nx, ny) && !vis[nx][ny]){dfs(nx, ny);}
    }
     if(k){g[x][y]='X';k--;}
}

int main(){
sc(n);sc(m);sc(k);
loop(i,0,n-1){scs(g[i]);}
loop(i,0,n-1){
  loop(j,0,m-1){
        if(g[i][j]=='.' && !vis[i][j]){dfs(i,j);}
    }
}
loop(i,0,n-1){printf("%s\n",g[i]);}

    return 0;
}

/**
100
7
1 2 3 4 4 3 2
7
2 4 4 4 3 2 1
5
3 2 2 1 1
5
1 1 2 2 3
5
1 2 3 2 1
**/
