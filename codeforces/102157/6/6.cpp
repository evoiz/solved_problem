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
const int N=10;
vector<int> adj[N];
int deg[N];
vector<int>out;
char s[5];
queue<int> q;
int main(){
loop(i,1,5){
  scs(s);
  int u=s[0]-'A';
  int v=s[2]-'A';
  if(s[1]=='<'){adj[u].pb(v);deg[v]++;}
  else{adj[v].pb(u);deg[u]++;}
}
loop(i,0,4){
  if(!deg[i]){q.push(i);}
}
while(!q.empty()){
int u=q.front();
q.pop();
//if(deg[u]!=0)
out.push_back(u);
for(auto v:adj[u]){
deg[v]--;
if(!deg[v]){q.push(v);}
}
}
if(out.size()!=5){printf("impossible\n");return 0;}
for(auto x:out){
  char c=x+'A';
  cout<<c;
}
}
