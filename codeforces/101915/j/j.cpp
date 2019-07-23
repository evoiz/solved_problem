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
#define scs(a) scanf(" %s",a)
#define me(a,b) memset(a,b,sizeof a)
#define all(a) a.begin(),a.end()
#define allr(a,n) a,a+n
#define loop(s,e,st) for(int i=s;i<=e;i+=st)
#define read_arr(a,s,n) for(int i=s;i<n+s;i++){sc(a[i]);}
#define read_arr_ll(a,s,n) for(int i=s;i<n+s;i++){scll(a[i]);}
#define err(a,s) cerr<<a<<s;
#define err_arr(a,s,n) for(int i=s;i<n+s;i++){cerr<<a[i]<<" ";}cerr<<endl;
using namespace std;
const int N=1e3+3;
vector<int> adj[N];
ll n,H,W,t,ans,x,y,r;
bool vis[N];
struct cir{
   ll x,y,r;
   int mask=0;
   cir(ll xx,ll yy,ll rr){
     x=xx;y=yy;r=rr;
     mask=0;
     mask=mask+(xx+rr>=W);
     mask=mask+(2*((xx-rr)<=0));
     mask=mask+(4*((yy+rr)>=H));
     mask=mask+(8*((yy-rr)<=0));
   }
};
cir tmp(0,0,0);
vector<cir> v;
bool ch(int a,int b){
    ll t1=(v[a].x-v[b].x)*(v[a].x-v[b].x)+(v[a].y-v[b].y)*(v[a].y-v[b].y);
    ll t2=(v[a].r+v[b].r)*(v[a].r+v[b].r);
    return (t1<=t2);
}
int dfs(int p){
vis[p]=1;
int ret=v[p].mask;
for(auto x:adj[p]){
   if(vis[x]){continue;}
   ret=ret|dfs(x);
}
return ret;
}
int main (){
    sc(t);
    while(t--){
       ans=0;
       sc(n);sc(W);sc(H);
       for(int i=0;i<n;i++){adj[i].clear();}
       v.clear();
         for(int i=0; i<n; i++){
            scll(x);scll(y);scll(r);
            cir tmp(x,y,r);
            v.push_back(tmp);
            //cerr<<"cir :"<<tmp.x<<" "<<tmp.y<<" "<<tmp.r<<" "<<tmp.mask<<endl;
        }

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(ch(i,j)){adj[i].push_back(j);adj[j].pb(i);}
        }
    }
    me(vis,0);
    ans=0;
    for(int i=0;i<n;i++){
        if(vis[i]){continue;}
        int emp=dfs(i);
        ans+=(emp>=3);
       //cerr<<"ans :"<<i<<" "<<ans<<" "<<emp<<endl;
    }
    printf("%d\n",ans);
}
    return 0;
}
