#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size

using namespace std;
ll seg(ll n){return 1ll*n*(n+1)/2;}
ll a;
int main(){
scanf("%lld",&a);
ll odd=(2ll*a)-1;
ll ans=1ll*(odd*odd)+(4*seg(a-1));
printf("%lld\n",ans);
}
