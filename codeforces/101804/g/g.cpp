#include <bits/stdc++.h>
#define F first
#define S second
#define ld long double
#define pb push_back
#define sz size
#define ll long long
using namespace std;
const int maxn=1e6,mod=1e9+7;
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
int main(){
init();
ll a,b,n,m;
while(cin>>a>>b){
n=a,m=a+b-(3*a);
cerr<<m<<" "<<n<<endl;
ll ans=solve(m,n)%mod;
ans%=mod;
ans*=mod_pow(6,a,mod)%mod;
ans%=mod;
ans*=f[n]%mod;
ans%=mod;
cout<<ans<<endl;
}
}
/**
())(())(())(
7
1 1
2 3
1 2
1 12
8 12
5 11
2 10
**/
