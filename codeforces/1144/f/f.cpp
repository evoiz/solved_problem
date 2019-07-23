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
int main(){
me(cl,-1);
sc(n);sc(m);
loop(i,1,m){
 int u,v;
 sc(u);sc(v);
 ed.pb({u,v});
 adj[u].pb(v);
 adj[v].pb(u);
}
queue<int> q;
q.push(1);
cl[1]=0;
while(q.size()){
 int node=q.front();
 q.pop();
 for(auto x:adj[node]){
   if(cl[x]!=-1 && cl[x]==cl[node]){printf("No\n");return 0;}
   if(cl[x]==-1){
     cl[x]=!cl[node];
     q.push(x);
   }
 }
}
printf("YES\n");
for(auto x:ed){
 if(cl[x.F]>cl[x.S]){printf("1");continue;}
 printf("0");
}
}
