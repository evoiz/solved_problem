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
const int N=1e5+10,mod=1e9+7;
int n,a,b,pr[N],sz[N];
vector<int> adj[N];
void dfs(int u,int p){
    pr[u]=p;
    sz[u]=1;
    for(auto v:adj[u])
      if(v!=p){
        dfs(v,u);
        sz[u]+=sz[v];
     }
}
void solve(){
me(sz,0);
for(int i=0;i<N;i++){adj[i].clear();}
sc(n);sc(a);sc(b);
loop(i,2,n){
 int u,v;
 sc(u);sc(v);
 adj[u].pb(v);
 adj[v].pb(u);
}
dfs(a,0);
ll ans=0;
int cur=0;
while(b!=a){
 ans+=1ll*(sz[b]-cur)*(n-sz[b]);
 cur=sz[b];
 b=pr[b];
}
printf("%lld\n",ans);
}
int t;
int main(){
sc(t);
while(t--){
solve();
}
return 0;
}
/**
3
3 3 2
1 0 1
0 0 0
1 0 0
4 4 2
1 0 0 0
0 1 0 0
0 0 1 0
0 0 0 1
5 5 5
1 0 1 0 1
0 1 0 1 0
0 0 0 0 0
0 1 0 0 0
1 0 1 1 1
**/
