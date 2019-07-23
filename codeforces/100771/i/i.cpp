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
const int N=1e5+10;
int in[N],timer,out[N],n,q;
vector<int> adj[N];
void dfs(int x,int par){
    in[x]=++timer;
    for (auto X:adj[x]){
        if (X!=par){
            dfs(X,x);
        }
    }
    out[x]=timer;
}
int main(){
sc(n);
loop(i,1,n-1){
int u,v;
sc(u);sc(v);
adj[u].pb(v);
adj[v].pb(u);
}
dfs(1,0);
sc(q);
while(q--){
int u,v;
sc(u);sc(v);
if(in[u]<=in[v] && out[u]>=out[v]){printf("YES\n");continue;}
printf("NO\n");
}
}
