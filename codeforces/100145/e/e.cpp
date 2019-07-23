#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size

using namespace std;
ll N=2147483647;
ll res(ll x){
ll ans=0;
ll sq=floor(sqrt(x));
for(ll i=1;i*i<=x;i++){ans+=(x/i);}
return 2ll*ans-(sq*sq);
}
ll solve(ll a,ll b){
ll aa=res(a-1);
ll bb=res(b);
return 1ll*(bb-aa);
}
ll a,b;
int  main(){
while(scanf("%lld%lld",&a,&b) && (a&&b)){
    printf("%lld\n",solve(a,b));
}
    return 0;
}
/**
ax + by = d
4x + 6y =2
90x + 24y=6
x=1  y=-4;
15x + 4y=1
15x=4y-1
15x=4y-1
///////
17x+11y=1

**/
