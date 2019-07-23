#include <bits/stdc++.h>
#define F first
#define S second
#define ld long douroote
#define pb push_back
#define ll long long
#define ull unsigned long long
#define INF 0x7f7f7f7f
#define sc(a) scanf("%d",&a)
#define scll(a) scanf("%lld",&a)
#define scc(a) scanf(" %c",&a)
#define scs(a) scanf(" %s",a)
#define me(a,b) memset(a,b,sizeof a)
#define all(a) a.begin(),a.end()
#define allr(a,n) a,a+n
#define loop(a,s,e) for(ll a=s;a<=e;a++)
#define read_arr(a,s,n) for(int i=s;i<n+s;i++){sc(a[i]);}
#define read_arr_ll(a,s,n) for(int i=s;i<n+s;i++){scll(a[i]);}
#define open(in,out) freopen(in,"r",stdin);freopen(out,"w",stdout);
#define err(a,s) cerr<<a<<s;
#define err_arr(a,s,n) for(int i=s;i<n+s;i++){cerr<<a[i]<<" ";}cerr<<endl;
#define prtll(x) printf("%lld",x);
#define prt(x) printf("%d",x);
using namespace std;
const int N=1e5+10,logN=20;
int to[N][logN],pa[N],ans[N],pr[N],dep[N],n,x,y,q;
vector<int> adj[N];
map<pair<int,int>,int > mp;
void build(){
loop(i,1,n){to[i][0]=pa[i];}
for(int lg = 1 ; lg < logN ; lg ++){
    for(int i = 1 ; i <= n ; i ++){
            to [i][lg]=to[ to[i][lg - 1] ][lg - 1];
        }
    }
}
void dfs(int p){
for(auto x:adj[p]){
    if(dep[x]==-1){
    dep[x]=dep[p]+1;
    pa[x]=p;
    dfs(x);
   }
}
return ;
}
int jump(int u, int k)
{
    for(int i = 0 ; i < logN ; i ++)
        if(k & (1 << i))
            u = to[u][i];
    return u;
}
int LCA(int u, int v){
    if(u == v)
        return u;

    if(dep[u] < dep[v])
        swap(u, v);

    u = jump(u, dep[u] - dep[v]);
    if(u == v)
        return u;

    for(int i = logN-1 ; i >= 0 ; i --)
        if(to[u][i] != to[v][i])
        {
            u = to[u][i];
            v = to[v][i];
        }

    return to[u][0];

}
int dfs2(int p){
  for(auto x:adj[p]){
    if(dep[x]<dep[p]){continue;}
    pr[p]+=dfs2(x);
  }
  return pr[p];
}
int main(){
me(dep,-1);
sc(n);
loop(i,1,n-1){
sc(x);sc(y);
adj[x].pb(y);
adj[y].pb(x);
mp[{x,y}]=i;
mp[{y,x}]=i;
}
dep[1]=0;
dfs(1);
build();
sc(q);
while(q--){
sc(x);sc(y);
int lca=LCA(x,y);
pr[x]++;
pr[y]++;
pr[lca]-=2;
}
dfs2(1);

for(auto x:mp){
  int node=x.F.F;
  if(dep[x.F.F]<dep[x.F.S]){node=x.F.S;}
  ans[x.S]=pr[node];
}
loop(i,1,n-1){printf("%d ",ans[i]);}
}
