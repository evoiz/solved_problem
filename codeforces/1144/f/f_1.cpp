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
const int N=2e5+10;
vector<int> adj[N];
vector<pair<int,int>  > ed;
int cl[N],vis[N],n,m;
bool ok=1;
void dfs(int x,int col){
   vis[x]=1;
   cl[x]=col;
   for(auto u:adj[x]){
     if(vis[u]!=-1 && cl[u]==(col) ){ok=0;return ;}
     if(vis[u]!=-1){continue;}
     dfs(u,!col);
   }
   return ;
}
int main(){
me(cl,-1);
me(vis,-1);

sc(n);sc(m);
loop(i,1,m){
 int u,v;
 sc(u);sc(v);
 ed.pb({u,v});
 adj[u].pb(v);
 adj[v].pb(u);
}
dfs(1,0);
if(!ok){printf("NO\n");return 0;}
printf("YES\n");
for(auto x:ed){
 if(cl[x.F]>cl[x.S]){printf("1");continue;}
 printf("0");
}

}
