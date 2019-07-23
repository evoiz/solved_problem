#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size

using namespace std;
const ll N=1e3+4,oo=1e9+7;
ll n,a[N],mx,mn,ans;
ll mod_n(ll x,ll mod){return ((x%mod)+mod)%mod;}
ll ch(ll x){
set<ll> st;
for(ll i=0;i<n;i++){
if(st.size()>1){return -1;}
st.insert(mod_n(a[i]+(mn-1),x));
}
return x;
}
int  main(){
while(scanf("%lld",&a[0]) && a[0]){
n=1;
ans=1;
mx=a[0],mn=a[0];
while(scanf("%lld",&a[n]) && a[n]){n++;}
sort(a,a+n);
ll gcd=0;
for(int i=1;i<n;i++){
        gcd=__gcd(gcd,abs(a[i]-a[i-1]));}
        if(gcd==0){gcd/=0;}
printf("%lld\n",gcd);
}
return 0;
}
/**
701 1059 1417 2312 0
14 23 17 32 122 0
14 -22 17 -31 -124 0
0
**/
