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
const int N=2e3+10;
int pr[N],sz[N];
int get(int x){
    if(x == pr[x])return x;
    return  pr[x] = get(pr[x]);
}
bool join(int x , int y){
    x = get(x);
    y = get(y);
    if(x == y)return false;
    if(rand() & 1)swap(x , y);
    pr[x] = y;
    sz[y]+=sz[x];
    sz[x]=0;
    return true;
}
int n,q;
int main(){
loop(i,0,N-1){pr[i]=i;sz[i]=1;}
sc(n);sc(q);
while(q--){
 int u,v;
 sc(u);sc(v);
 join(u,v);
}
sc(q);
while(q--){
  int u,v;
  sc(u);sc(v);
  if(get(u)==get(v)){
    sz[get(u)]=-1;
  }
}
int ans=0;
loop(i,1,n){ans=max(ans,sz[get(i)]);}
printf("%d\n",ans);
}
/**
AB
#D
**/
