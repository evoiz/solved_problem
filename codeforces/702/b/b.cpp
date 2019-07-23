#pragma GCC optimize ("O3")
#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size

using namespace std;
const int N=1e5+6;
map<ll,int> mp;
ll x,n,ans;
void solve(ll x){
  for(int i=1;i<35;i++){
    ll ln=(1ll<<i);
    ln=1ll*(ln-x);
  //  cerr<<ln<<" ";
    ans+=mp[ln];
  }
  cerr<<endl;
}
int main(){
scanf("%lld",&n);
for (int i=0;i<n;i++) {
  scanf("%lld",&x);
  solve(x);
  mp[x]++;
}
printf("%lld\n",ans);
return 0;
}
