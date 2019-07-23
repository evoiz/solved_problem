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
const int N=200000+10;
vector<int> adj[N];
int last[N],n,a[N],dis[N];
void bfs(int s){
me(dis,-1);
queue <int> q;
dis[s]=0;
q.push(s);
while(q.size()){
	int node=q.front();
	q.pop();
	for(auto x:adj[node]){
		if(dis[x]==-1 || dis[x]>dis[node]+1){
			dis[x]=dis[node]+1;
			q.push(x);
		}
	}
}
	
}
int main(){
sc(n);
me(last,-1);
read_arr(a,1,n);
loop(i,1,n-1){
 adj[i].pb(i+1);	
}
loop(i,1,n){
  if(last[a[i]]!=-1){
	  adj[last[a[i]]].pb(i);
  }
  last[a[i]]=i;
}
bfs(1);
printf("%d\n",dis[n]);
}