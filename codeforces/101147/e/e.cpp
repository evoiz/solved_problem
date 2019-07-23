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
const int N=1e5+10;
int dis[N],a[N],n;
int dx[]={1,-1};
vector<int> adj[N];
int in(ll x){return (x>=1 && x<=n);}
void solve(){
loop(i,0,N-1){adj[i].clear();}
sc(n);
read_arr(a,1,n);
loop(i,1,n){
  loop(dr,0,1){
    int x=i+(dx[dr]*a[i]);
    if(in(x)){adj[x].pb(i);}
  }
}
me(dis,-1);
dis[n]=0;
queue<int> q;
q.push(n);
while(q.size()){
  int cur=q.front();
  q.pop();
  for(auto x:adj[cur]){
    if(dis[x]!=-1){continue;}
    dis[x]=1+dis[cur];
    q.push(x);
  }
}
loop(i,1,n){
 printf("%d\n",dis[i]);
}

}
int main(){
freopen("jumping.in","r",stdin);
int t;
sc(t);
while(t--){
solve();
}

}
/**
2
5
1 1 1 1 1
5
2 2 2 2 2
**/
