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
ll xa,xb,ya,yb,n,m;
void solve(){
scll(n);scll(m);scll(xa);scll(ya);scll(xb);scll(yb);
ll xx=n-abs(xa-xb);
ll yy=m-abs(ya-yb);
ll x_=max(0ll,2ll*xx-n);
ll y_=max(0ll,2ll*yy-m);
ll ans=n*m-(2*xx*yy)+(y_*x_);
printf("%lld\n",ans);
}


int t;
int main(){
sc(t);
while(t--){
solve();
}

}
/**
2
5 5
1 2 3 4 5
1 1 1 1 2
5 5
1 2 3 4 5
1 1 1 1 2
**/
