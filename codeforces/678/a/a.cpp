#pragma GCC optimize ("O3")
#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size

using namespace std;
const int N=3e5+6;
ll n,k;
int main(){
scanf("%lld%lld",&n,&k);
ll ans=n/k;
ans=1ll*(ans+1ll)*k;
printf("%lld\n",ans);
return 0;
}
