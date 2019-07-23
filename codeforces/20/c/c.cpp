#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size
#define OO 1e9

using namespace std;
const int N=1e5+10,oo=1e9+10;
ll n, m,x,y,tmp,op;
vector<vector<pair<int, int> > > g;
ll dist[N],path[N];
bool ok;
struct node {
int num;ll dist;
node() {num = 0, dist = 1e17;}
node(int u, int d) {this->num = u;this->dist = d;}

bool operator<(const node & o) const {
if (dist != o.dist)
return dist > o.dist;
return num > o.num;
}
};
void dijkstra() {
	for (int i = 0; i <=n; i++){dist[i] = 1e17;}
	dist[1]=0;
     priority_queue<node> pq;
	pq.push(node(1,0));

	while (!pq.empty()) {
		node u = pq.top();
		pq.pop();
		for (int i = 0; i < g[u.num].size(); i++) {
			ll v = g[u.num][i].first;
			ll c = g[u.num][i].second;

			if (dist[v] > dist[u.num] + c) {
               op++;
               ///cerr<<v<<" "<<u.num<<endl;
				dist[v] = dist[u.num] + c;
				pq.push(node(v, dist[v]));
				path[v]=u.num;
				if(u.num==n){ok=1;}
			}
		}
	}
  }
int main(){
memset(path,-1,sizeof path);
scanf("%lld%lld",&n,&m);
g.clear();
g.resize(n+10);

for(int i=0;i<m;i++){scanf("%lld%lld%lld",&x,&y,&tmp);g[x].push_back({y,tmp});g[y].push_back({x,tmp});}
dijkstra();
cerr<<dist[n]<<endl;
if(dist[n]==1e17){printf("-1\n");return 0;}
cerr<<"Done"<<endl;
vector<int> anss;
for(ll i = n;i!=1;){
        anss.push_back(i);
        i = path[i];
    }
    reverse(anss.begin(),anss.end());
    printf("1\n");
    for(auto x:anss){printf("%d ",x);}

}