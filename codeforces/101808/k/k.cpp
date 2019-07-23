#include <bits/stdc++.h>
#define F first
#define S second
#define ld long double
#define ll long long
#define pb push_back
#define sz size
#define sc(a) scanf("%d",&a)
#define scll(a) scanf("%lld",&a)
#define scc(a) scanf(" %c",&a)
#define scs(a) scanf(" %s",a)
#define me(a,b) memset(a,b,sizeof a)
#define INF 0x7f7f7f7f
using namespace std;
const int N =(1e5)+10,L=19;
ll  n,t,q,s,d,u,v,w;
vector<pair<int,int> >adj[N];
pair<pair<int,int>,int> ex;
ll  P[N],p[N][19],dep[N];
ll  dist[N];

ll par(ll u){if (u==P[u]){return  u;}return par(P[u]);}
void join(ll u,ll v){if (rand()&1)swap(u,v);P[par(u)]=par(v);return;}

void init(){
me(dist,0);
me(p,0);
me(dep,0);
for(ll i=0;i<N;i++){
adj[i].clear();
P[i]=i;
}

}

void dfs(ll u,ll par){
    p[u][0]=par;
    dep[u]=1+dep[par];
    for(auto v:adj[u])
        if( v.F!=par ){
            dist[v.F]=dist[u]+v.S;
            dfs(v.F,u);
        }
   return ;
}

ll jump(ll u,ll k){
    for(ll i=0; i<L; i++){
        if( k&(1<<i) ){u=p[u][i];}
    }
    return u;
}


ll LCA(ll u,ll v){
    if(u==v){return u;}
    if( dep[u]<dep[v] ){swap(u,v);}

    ll dif = dep[u]-dep[v];
    u=jump(u,dif);

    if(u==v){return u;}

    for(ll i=L-1; i>=0; i--)
    {
        if( p[u][i]!=p[v][i] )
        {
            u=p[u][i];
            v=p[v][i];
        }
    }
    return p[u][0];
}
ll cal(ll s,ll d){
ll lc=LCA(s,d);
return dist[s]+dist[d]-2*dist[lc];
}
ll solve(ll s,ll u,ll v,ll d){
ll ans=cal(s,d);
ans=min(ans,cal(s,u)+cal(v,d)+ex.S);
return ans;
}
int  main(){
scll(t);
while(t--){
scll(n);scll(q);
init();
for(ll i=0;i<n;i++){
scll(u);scll(v);scll(w);
if(par(u)==par(v)){ex=make_pair(make_pair(u,v),w);continue;}
join(u,v);
adj[u].pb({v,w});
adj[v].pb({u,w});
}
dist[1]=0;
dfs(1,1);

for(ll i=1;i<L;i++){
    for (ll j=1;j<=n;j++){p[j][i]=p[p[j][i-1]][i-1];}
}
while(q--){
scll(s);scll(d);
ll ans=min(solve(s,ex.F.F,ex.F.S,d),solve(s,ex.F.S,ex.F.F,d));
printf("%lld\n",ans);
}

}

}
