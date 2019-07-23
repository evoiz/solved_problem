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
const int N=1e2+10;
char in[30];
vector<int> adj[N];
int id,a,b,c;
int dis[N],n;
map<string,int> mp;
inline string read(){scs(in);return (string)in;}
inline int get(string s){
if(mp.find(s)!=mp.end()){return mp[s];}
mp[s]=id;
id++;
return id-1;
}
vector<pair<int,string> >out;
void bfs(int s){
me(dis,-1);
dis[s]=0;
queue<int> q;
q.push(s);
while(q.size()){
  int node=q.front();
  q.pop();
  for(auto x:adj[node]){
    if(dis[x]!=-1){continue;}
    dis[x]=dis[node]+1;
    q.push(x);
  }
}

}
void solve(){
out.clear();
mp.clear();
mp["Ahmad"]=0;
id=1;
sc(n);
loop(i,0,N-1){adj[i].clear();}
loop(i,1,n){
 a=get(read());
 b=get(read());
 c=get(read());
 adj[a].pb(c);adj[a].pb(b);
 adj[b].pb(c);adj[b].pb(a);
 adj[c].pb(b);adj[c].pb(a);
}
me(dis,-1);
bfs(0);
for(auto x:mp){
out.pb({dis[x.S]==-1?1e9:dis[x.S],x.F});
}
sort(all(out));
printf("%d\n",id);
for(auto x:out){
  printf("%s ",x.S.c_str());
  if(x.F==1e9){printf("undefined\n");continue;}
  printf("%d\n",x.F);
}

}
int main(){
int t;
sc(t);
while(t--){solve();}
}
/**
**/
