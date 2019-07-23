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
bool ch[N];
set<ll>pr;
void sieve(){
for(long long i=2;i<N-3;i++){
    if(!ch[i]){
        pr.insert(i);
        for(long long j=i*2;j<=N-3;j+=i){ch[j]=1;}
    }
 }
}
ll isPerfectSquare(ll x){
    ll s=sqrt(x);
    return (s*s == x?s:-1);
}
ll multMod(ll a,ll b, ll m){
    ll x=0,y=a%m;
    while(b >0){
        if (b%2) x=(x+y)%m;
        y=(y*2)%m;
        b/=2;
    }
    return x;
}
ll pow_(ll a,ll b,ll mod=1e9+7){
    ll ans=1ll;
    a%=mod;
    while(b){
        //cerr<<ans<<" "<<a<<endl;
        if(b&1)ans=multMod(ans,a,mod);
        a=multMod(a,a,mod);
        b>>=1;
    }
    return ans;
}
bool miillerTest(ll d, ll n){
    ll a = 2 + rand() % (n - 4);
    ll x = pow_(a, d, n);
    if (x == 1 || x == n-1){return 1;}
    while (d != n-1){
        x =multMod(x,x,n);
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
ll get(ll x){
ll ret=1;
for(auto p:pr){
  if(p*p*p>x){break;}
    ll cnt=1;
    while(x%p==0){cnt++;x/=p;}
   ret*=cnt;
}
ll is=isPerfectSquare(x);
if(prime(x,1000)){ret*=2ll;}
else if(is!=-1 && prime(is,1000)){ret*=3ll;}
else if(x!=1){ret*=4ll;}
return ret;
}
int  main(){
sieve();
ll n;
scll(n);
n=get(n);
printf("%lld\n",n);
}
