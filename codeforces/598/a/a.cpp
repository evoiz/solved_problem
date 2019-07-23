#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size

using namespace std;
ll a,t;
ll solve(ll a){
ll ln=log2(a)+1;
ln = 2ll *((1ll<<ln)-1);
ll ans= a * (a+1)/2;
///cout<<ln<<endl;
ans-=ln;
return ans;
}
int main(){
scanf("%lld",&t);
while(t--){
  scanf("%lld",&a);
  ll ans=solve(a);
  printf("%lld\n",ans);
}
    return 0 ;
}
