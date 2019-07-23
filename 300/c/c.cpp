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
using namespace std;
const int maxn=(1e6)+10;
const ll mod=1000000007ll;
ll a,b,n;
ll f[maxn],inv[maxn];

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
    for(int i=1; i<maxn; i++){
            f[i]=1ll*i*f[i-1]%mod,inv[i]=mod_pow(f[i],mod-2,mod);
    }
}

ll solve(int n,int m){
    return f[n]*inv[n-m]%mod*inv[m]%mod;
}

bool ok(ll sum){
while(sum){
if(sum%10 != a && sum%10!=b){return 0;}
sum/=10;
}
return 1;
}
int main(){
init();
scll(a);scll(b);scll(n);
ll ans=0;
for(int i=0;i<=n;i++){
    ll tmp=1ll*a*i+(n-i)*b;
    if(ok(tmp)){ans+=solve(n,i);ans%=mod;}
}
printf("%lld\n",ans);
return 0;
}/*
**/
