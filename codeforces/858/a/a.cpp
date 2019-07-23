#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size

using namespace std;
const int N=200;
ll x,a;
ll lcm(ll a,ll b){return 1ll*a/__gcd(a,b)*b;}
int main(){
scanf("%lld%lld",&x,&a);
ll pw=1;
for(int i=0;i<a;i++){
  pw*=10ll;
}
ll ans=lcm(x,pw);
printf("%lld\n",ans);
return 0;
}