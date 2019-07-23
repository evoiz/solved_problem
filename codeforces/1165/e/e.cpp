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
const int N=1e6+10;
ll a[N],b[N],n,ans[N],mod=998244353;
void solve(){
scll(n);
read_arr_ll(a,0,n);
read_arr_ll(b,0,n);
loop(i,0,n-1){a[i]*=(i+1)*(n-i);}
sort(a,a+n);
sort(b,b+n,greater<ll> ());
ll sum=0;
loop(i,0,n-1){
a[i]%=mod;
b[i]%=mod;
sum+=a[i]*b[i];
sum%=mod;
}
printf("%lld\n",sum);
}

int main(){
solve();
}

/**
5
1 8 7 2 4
9 7 2 9 3

**/
