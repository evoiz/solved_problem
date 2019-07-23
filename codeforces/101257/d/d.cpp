#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size

using namespace std;
const int N = (1e3) + 5;
ll n,x,y;
bool ok(ll m){
ll ans=(m/x)+(m/y);
return ans>=n;
}
ll bsr(ll l,ll r){
  ll mid;
  while(l<r-1){
    mid=(l+r)/2;
    if(ok(mid)){r=mid;}
    else{l=mid;}
  }
  return r;
}
int main(){
    scanf("%lld%lld%lld",&n,&x,&y);
    ll ans=bsr(0,(min(x,y)*n+100));
    printf("%lld",ans);
    return 0;
}
/**
3
3
RPS
**/
