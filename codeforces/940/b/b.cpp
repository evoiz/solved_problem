#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size

using namespace std;
const int N=(1e9)+5,oo=1e9+10;
ll a,b,x,k;
ll  rec(ll x){
if(x==k){return min(b,a*(k-1));}
if(x<k){return a*(x-1);}
  if(x%k){
    ll y=a*(x%k)+rec(x-(x%k));
    return y;
  }
  else{
   ll ans=min(a*(x-(x/k)),b)+rec(x/k);
    return ans;
  }
}
int main(){
scanf("%lld%lld%lld%lld",&x,&k,&a,&b);
if(k==1){printf("%lld\n",a*(x-1));return 0;}
printf("%lld",rec(x));
    return 0;
}
/**
19
3
4
2
19
1 rec(18)

**/
