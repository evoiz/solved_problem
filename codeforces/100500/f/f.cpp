#include <bits/stdc++.h>
#include <set>
#include <map>
#include <stdio.h>
#include <cstring>
#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size

using namespace std;
const int N = 1e5 + 5;
ll n,m,t;
bool ok(ll x){
return ((1ll*x*(x+1)/2)<m);
}
ll bsr(ll l,ll h){
ll mid;
while(l<h){
  mid=(l+h)/2;
 if(ok(mid)){l=mid+1;}
 else{h=mid;}
}
return 1ll*(h-1);
}
int main(){
    scanf("%lld" , &t);

    for(ll tt = 1 ; tt <= t ;tt++){
      scanf("%lld%lld",&n,&m);
      if(m==1){printf("Case %lld: 0 0\n",tt);continue;}
      ll ans=bsr(0ll,n);
      m--;
       printf("Case %lld: %lld %lld\n",tt,ans,m-(1ll*ans*(ans+1))/2);
    }
}
/**

2
10 3 9
1 1 2 2 1 1 2 3 1 2
10 3 9
1 1 2 2 1 1 2 3 1 2

**/
