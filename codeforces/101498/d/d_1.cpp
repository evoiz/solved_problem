#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define INF 0x3f3f3f3f
const int maxn=1e5+5;
const ll mod=1000000007ll;
ll f[maxn];
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
    f[0]=1;
    for(int i=1;i<=1e5;i++)f[i]=1ll*i*f[i-1]%mod;
}
ll solve(int n,int m){
  return f[n]*mod_pow(f[m]*f[n-m]%mod,mod-2,mod)%mod;
}
    int t,n,m;
int main(){
    init();
    scanf("%d",&t);
    while(t--){
        scanf("%d%d",&n,&m);
       /// if(!n && !m){printf("1\n");continue;}
        ll ans=(2*(solve(n-1,m)))%mod;
        printf("%I64d\n",ans);
    }
    return 0;
}
