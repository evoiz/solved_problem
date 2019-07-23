#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size
using namespace std;
const int N=1e5+10,oo=1e9+7,mod=1e9+7;
ll n ,a[N],b[N],c[N],t;
int main(){
    scanf("%lld",&t);
    while(t--){
    scanf("%lld",&n);
    ll ans=1;
    a[0]=1;a[n+1]=1;
    b[0]=1;b[n+1]=1;
    c[0]=1;c[n+1]=1;
    for(int i=1;i<=n;i++){
            scanf("%lld",a+i);
            ans*=a[i];
            ans%=mod;
    }
    ans*=n;
    ans%=mod;
    for(int i=n;i>=1;i--){b[i]=b[i+1]*a[i];b[i]%=mod;}
    for(int i=1;i<=n;i++){c[i]=c[i-1]*a[i];c[i]%=mod;}
    for(int i=1;i<=n;i++) {
      ans-=(c[i-1]*b[i+1])%mod;
       ans+=mod;
        ans%=mod;
    }
    printf("%lld\n",ans);
}
    return 0;
}
/**
1000
5 4
2 1 1 1
ans=
1 1 2 1

1 2 3 2 1 2 3 2

**/
