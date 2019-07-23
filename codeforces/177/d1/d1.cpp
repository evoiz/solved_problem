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
ll a[N],b[N],pr[N],n,mod,m;
void update(int s,int e,ll val){
pr[s]+=1ll*val;
pr[e+1]-=1ll*val;
}
int main(){
scll(n);scll(m);scll(mod);
read_arr_ll(a,1,n);
read_arr_ll(b,1,m);
loop(i,1,m){
  update(i,i+n-m,b[i]);
}
loop(i,1,n){pr[i]+=pr[i-1];}
loop(i,1,n){printf("%lld ",(pr[i]+a[i])%mod);}
}