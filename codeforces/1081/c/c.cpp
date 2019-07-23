
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
#define ll long long
using namespace std;
ll mod=998244353;
const int N=2018;
ll f[N],inv[N];
ll pow_(ll a,ll b,ll mod){
    ll ans=1ll;
    while(b){
        if(b&1)ans=ans*a%mod;
        a=a*a%mod;
        b>>=1;
    }
    return ans;
}

void init(){

}
ll n,k,m;
int main(){
scll(n);scll(m);scll(k);

f[0]=inv[0]=1;
    for(int i=1; i<=n+2; i++){
            f[i]=1ll*i*f[i-1]%mod,inv[i]=pow_(f[i],mod-2,mod);
}
ll ans=f[n-1]*inv[n-1-k]%mod*inv[k]%mod;
ans%=mod;
ans=(ans%mod)*(m%mod)%mod;
ans%=mod;
ans=(ans%mod)*(pow_(m-1,k,mod)%mod)%mod;
ans%=mod;
printf("%lld\n",ans);
}

