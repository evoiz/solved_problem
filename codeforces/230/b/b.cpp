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
map<ll,int> mp;
ll pow_(ll a,ll b,ll mod=1e9+7){
    ll ans=1ll;
    while(b){
        if(b&1)ans=ans*a%mod;
        a=a*a%mod;
        b>>=1;
    }
    return ans;
}
bool miillerTest(ll d, ll n){
    ll a = 2 + rand() % (n - 4);
    ll x = pow_(a, d, n);
    if (x == 1 || x == n-1){return 1;}
    while (d != n-1){
        x =(x*x)%n;
        d *= 2;
        if (x == 1){return 0;}
        if (x == n-1){return 1;}
    }
    return 0;
}
bool prime(ll n, ll k){
    if (n <= 1 || n == 4){return 0;}
    if (n <= 3){return 1;}
    ll d = n - 1;
    while (d % 2 == 0){d/= 2;}
    for (ll i = 0; i < k; i++)
         if (!miillerTest(d, n)){return 0;}
    return 1;
}
bool isPerfectSquare(ll x){
    ll s = sqrt(x);
    return (s*s == x);
}
bool get(ll x){
if(mp.find(x)!=mp.end()){return mp[x];}
int ret=0;
if(isPerfectSquare(x)){
  ll n=1ll*sqrt(x);
  if(prime(n,2)){
    ret=1;
  }
  else{
    ret=0;
  }
}
else {
ret=0;

}
mp[x]=ret;
return ret;
}
int  main(){
ll t,n;
mp.clear();
scll(t);
while(t--){
scll(n);
printf(get(n)?"YES\n":"NO\n");

}

}
