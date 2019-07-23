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
using namespace std;
const int N=1e5+10;
ll t,n,m,k,mod=1e9+7,inv[N];
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
    for(int i=1;i<N;i++){
     inv[i] = mod_pow(1ll*i,mod-2,mod);
  }
}
int main(){
  init();
  scll(t);
  for(int tt=1;tt<=t;tt++){
    scll(n),scll(k);
    ll all=mod_pow(2,n,mod);
   ll ans=1,C=1;
    for(int i=1;i<k;i++){
        C=(C*(n-i+1))%mod;
        C=(C*inv[i])%mod;
         ans+=C;
        ans%=mod;
    }
     all= (all-ans+mod)%mod;
      printf("Case #%d: %lld\n",tt,all);
  }
}
/**
**/
