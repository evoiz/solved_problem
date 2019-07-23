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
const int N=1e6+10;
vector<int> adj[N],pos,val;
int a[N],b[N],n,m,x,y;
bool vis[N];
void dfs(int p){
vis[p]=1;
for(auto x:adj[p]){
 if(!vis[x]){dfs(x);}
}
pos.pb(p);
return ;
}
int main(){
sc(n);sc(m);
read_arr(a,1,n);
while(m--){
sc(x);sc(y);
adj[x].pb(y);
adj[y].pb(x);
}
loop(i,1,n){
if(!vis[i]){
pos.clear();
dfs(i);
val.clear();
loop(i,0,pos.size()-1){val.pb(a[pos[i]]);}
sort(all(val),greater<int>());
sort(all(pos));
loop(i,0,val.size()-1){b[pos[i]]=val[i];}
}
}
loop(i,1,n){printf("%lld ",b[i]);}
}
