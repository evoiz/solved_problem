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
const ll mod=1e9+7;
const int N=2e5+10;
ll f[N],inv[N];
ll pow_(ll a,ll b,ll mod=1e9+7){
    ll ans=1ll;
    while(b){
        if(b&1)ans=ans*a%mod;
        a=a*a%mod;
        b>>=1;
    }
    return ans;
}
void init(){
    f[0]=inv[0]=1;
    for(int i=1; i<N; i++){
            f[i]=1ll*i*f[i-1]%mod,inv[i]=pow_(f[i],mod-2);
    }
}
ll C(int n,int m){
    return f[n]*inv[n-m]%mod*inv[m]%mod;
}
void solve(){
    ll n,m;
    scll(n);scll(m);
    n=abs(n);
    if(m<n){printf("0\n");return ;}
    if(abs(n-m)%2){printf("0\n");return ;}
    ll pos=abs(n-m)/2;
    ll p=C(m,pos)%mod;
    ll ans= (p * pow_(2ll,m*(mod-2)))%mod;
    printf("%lld\n",ans);
	
}
int main(){
  init();
  int t;
  sc(t);
  while(t--){
	  solve();
  }
}
