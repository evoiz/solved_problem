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
const int N=2e3+10;
vector<int> adj[N];
int n,m,dis[N];
void bfs(int s){
	queue<int> q;
	me(dis,-1);
	dis[s]=0;
	q.push(s);
	while(q.size()){
		int node=q.front();
		q.pop();
		for(auto x:adj[node]){
			if(dis[x]!=-1){continue;}
			q.push(x);
			dis[x]=dis[node]+1;
		}
		
		
	}
	
}
int ans=-1;
int main(){
	sc(n);sc(m);
	loop(i,1,m){
		int u,v;
		sc(u);sc(v);
		adj[u].pb(v);
		adj[v].pb(u);
	}
	loop(i,1,n){
	bfs(i);
	int mn=*min_element(dis+1,dis+n+1);
	//err_arr(dis,1,n);
	if(mn==-1){printf("=[\n");return 0;}
	int mx=*max_element(dis+1,dis+n+1);
	ans=max(ans,mx);
   }
	printf("=] %d\n",ans);
}
