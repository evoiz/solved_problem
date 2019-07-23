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
const int N=200000+10;
const ll mod=1000000009ll;
ll f[N],inv[N];
ll mod_pow(ll a,ll b,ll mod){
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
            f[i]=1ll*i*f[i-1]%mod,inv[i]=mod_pow(f[i],mod-2,mod);
    }
}

ll solve(int n,int m){
    return f[n]*inv[n-m]%mod*inv[m]%mod;
}
ll  phi ( ll  n ) {  ///phi of n
	ll  i,res = n ;
	for (i=2;i*i<=n;i++){
		if ( n % i == 0 ){
                while (n%i==0){n/=i;}
               res -= res / i ;
             }
        }
	if(n>1){res-=res/n;}  return 1ll*res ;
}
ll n,ans;
int main(){
init();
scll(n);
for(int i=1;i<=n;i++){
ans+=(mod_pow(2ll,n-i,mod)-1)*solve(n,i)%mod;
ans%=mod;
}
printf("%lld\n",ans);
}
/**
1 23
1 32

n * (n-1) * (n-2)

**/
