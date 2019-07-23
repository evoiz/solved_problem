#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define INF 0x3f3f3f3f
#define maxn 100005
const ll mod=1000000007ll;
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
    for(int i=1;i<maxn;i++){
            f[i]=1ll*i*f[i-1]%mod;
            inv[i]=mod_pow(f[i],mod-2,mod);
    }
}
ll solve(int n,int m){
    return f[n]*inv[n-m]%mod*inv[m]%mod;
}
    int t,n,m;
int main(){
    init();
    scanf("%d",&t);
    while(t--){
       scanf("%d%d",&n,&m);
        ll ans=((solve(m+n,m)))%mod;
        printf("%I64d\n",ans);
}
    return 0;
}
