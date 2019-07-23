/**  elias **/
#include <bits/stdc++.h>
#define F first
#define S second
#define ld long double
#define pb push_back
#define sz size
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
#define err(a,s) cerr<<a<<s;
#define err_arr(a,s,n) for(int i=s;i<n+s;i++){cerr<<a[i]<<" ";}cerr<<endl;
#define F first
#define S second
#define ld long double
#define ll long long
#define pb push_back
#define sz size
using namespace std;
const int N=2e5+10;
vector<int> adj[N];
int  vis[N];
int n;
int bfs(){
me(vis,0);
queue<int> q;
loop(i,1,n){if(adj[i].size()==1){q.push(i);vis[i]=1;}}	
while(q.size()){
	int node=q.front();
	q.pop();
	for(auto x:adj[node]){
	  if(vis[x]==0 && adj[x].size()<=2){
		 vis[x]=1;
		 q.push(x); 
	  }	
	}
}
loop(i,1,n){
   if(!vis[i]){
	   int more=0;
	   for(auto x:adj[i]){
	     more+=(vis[x]==0);
	   }
	   if(more>2){return 0;}
   }	
}
return 1;
}
int main(){
sc(n);
loop(i,1,n-1){
	int u,v;
	sc(u);sc(v);
	adj[u].pb(v);
	adj[v].pb(u);
}
printf(bfs()?"YES\n":"NO\n");

}
