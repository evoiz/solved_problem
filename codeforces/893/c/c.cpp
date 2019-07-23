#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size
#define sc(a) scanf("%d",&a)
#define scll(a) scanf("%lld",&a)
#define scc(a) scanf(" %c",&a)
#define ii pair<int,int>
#define scs(a) scanf(" %s",a)
#define me(a,b) memset(a,b,sizeof a)
#define all(a) a.begin(),a.end()
#define allr(a,n) a,a+n
#define loop(s,e,st) for(int i=s;i<=e;i+=st)
#define read_arr(a,s,n) for(int i=s;i<n+s;i++){sc(a[i]);}
#define read_arr_ll(a,s,n) for(int i=s;i<n+s;i++){scll(a[i]);}
#define err(a,s) cerr<<a<<s;
#define err_arr(a,s,n) for(int i=s;i<n+s;i++){cerr<<a[i]<<" ";}cerr<<endl;
#define F first
#define S second
#define ld long double
#define pb push_back
#define sz size
#define ll long long
using namespace std;
const int N=1e5+10;
vector<int> adj[N];
ll a[N],vis[N],n,m,x,y,ans;
ll bfs(int p){
ll mn=a[p];
queue<int> q;
q.push(p);
vis[p]=1;
while(q.size()){
int pp=q.front();
q.pop();
for(auto x:adj[pp]){
if(vis[x]){continue;}
mn=min(a[x],mn);
vis[x]=1;
q.push(x);
}
}
return mn;
}
int main(){
scll(n);scll(m);
read_arr_ll(a,1,n);
while(m--){scll(x);scll(y);adj[x].pb(y);adj[y].pb(x);}
for(int i=1;i<=n;i++){
if(!vis[i]){ans+=1ll*bfs(i);}
}
printf("%lld\n",ans);
}
