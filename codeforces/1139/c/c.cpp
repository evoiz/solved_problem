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
#define prt(x) printf("%d",x);using namespace std;
using namespace std;
const int N=1e5+10;
int n,k,vis[N],mod=1e9+7;
vector<pair<int,int> > adj[N];
ll pow_(ll a,ll b){
    ll ans=1ll;
    while(b){
        if(b&1)ans=ans*a%mod;
        a=a*a%mod;
        b>>=1;
    }
    return ans;
}
int dfs(int x){
   vis[x]=1;
   int ans=1;
   for(auto e:adj[x]){
     if(vis[e.F]){continue;}
     if(e.S){continue;}
     ans+=dfs(e.F);
   }
   return ans;
}
int main(){
sc(n);sc(k);
loop(i,1,n-1){
 int u,v,ty;
 sc(u);sc(v);sc(ty);
 adj[u].pb({v,ty});
 adj[v].pb({u,ty});
}
int ans=pow_(n,k);
loop(i,1,n){
  if(vis[i]){continue;}
  ans-=pow_(dfs(i),k)%mod;
  ans+=mod;
  ans%=mod;
}
printf("%d\n",ans);
}
/**
1
4
1 1 3 4

1 3
2 4
3 2
4 2
5 3
6
**/
