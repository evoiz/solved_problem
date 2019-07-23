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
const int N=5e5+10;
vector<int> adj[N],tmp;
int dep[N],vis[N],n,ans;
void dfs(int x){
//cerr<<x<<endl;
int ok=0;
for(auto u:adj[x]){
  if(dep[u]!=-1){continue;}
  dep[u]=dep[x]+1;
  dfs(u);
  ok=1;
}
if(!ok){tmp.pb(dep[x]);}
return ;
}
int main(){
me(dep,-1);
sc(n);
loop(i,1,n-1){
   int u,v;
   sc(u);sc(v);
   adj[u].pb(v);
   adj[v].pb(u);
}
dep[1]=0;
for(auto x:adj[1]){
  tmp.clear();
  dep[x]=1;
  dfs(x);
  sort(all(tmp));
 // cerr<<tmp.size()<<endl;
  //if(tmp.size()==0){continue;}
  for(int i=1;i<tmp.size();i++){
    tmp[i]=max(tmp[i],tmp[i-1]+1);
  }
  ans=max(ans,tmp[tmp.size()-1]);
}
printf("%d\n",ans);
}

