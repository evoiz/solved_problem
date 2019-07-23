#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size

using namespace std;
const ll N=2e3+10,oo=1e9;
ll n;
ll f(ll n){
    ll ret=1;
    for (int i=2;i*i<=n;i++){
        if (n%i==0){
            int cnt=0;
            while(n%i==0){
                n/=i;
                cnt++;
            }
            cnt*=2ll;
            ret*=1ll*(cnt+1);
        }
    }
    if (n!=1){
        ret*=3;
    }
    return ret;
}
int main(){
scanf("%lld",&n);
ll ans=f(n);
printf("%lld\n",ans);
 return 0;
}
/**
n=(x*y)/(x+y);
y=2

**/
