#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size

using namespace std;
ll mod_pow(ll a,ll b,ll mod){
    ll ans=1ll;
    while(b){
        if(b&1)ans=ans*a%mod;
        a=a*a%mod;
        b>>=1;
    }
    return ans;
}
ll n,k,a,t,tmp,co=1,ans;
int main(){
while(true){
    scanf("%I64d%I64d%I64d",&n,&k,&a);
    if(!n && !k && !a){return  0;}
    scanf("%I64d",&t);
    printf("Case %I64d:\n",co++);
    for(ll i=1;i<=t;i++){
    scanf("%I64d",&tmp);
    ans=a%tmp* mod_pow (k,n,tmp)%tmp;
    printf("%I64d",ans);
    (t==i?printf("\n"): printf(" "));
    }
 }
}
