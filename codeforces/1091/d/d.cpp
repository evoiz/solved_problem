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
#define F first
#define S second
#define ld long double
#define pb push_back
#define sz size
#define ii pair < int , int >
#define LS pair < ll , string >
using namespace std;
ll n,ans,tmp,a[1001000];
ll mod = 998244353;
ll pow_(ll a, ll n) {
    ll ret= 1ll;
    while(n){
        if (n&1){ret=1ll*ret*a;ret%=mod;}
        a=1ll*a*a;
        a%=mod;
        n >>= 1;
    }
    return ret%mod;
}

void init(){
a[0]=1;
for(ll i=1;i<=1e6;i++)a[i]=(a[i-1]*i)%mod;
}
int main(){
init();
scll(n);ans=a[n];
for(ll i=1;i<=n;i++){
    	tmp=a[n]*pow_(a[n-i],mod-2)%mod;tmp%=mod;
    	tmp*=1ll*(a[n-i]-1)%mod;
    	tmp%=mod;
    	ans+=tmp;
    	ans%=mod;
    }
    ans%=mod;
  printf("%lld\n",(ans+mod)%mod);
  return 0;
}
