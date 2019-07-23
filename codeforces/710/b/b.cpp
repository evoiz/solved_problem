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
ll x,n,ans=2e9+10,a[N],ii,tmp;
int main(){
scanf("%lld",&n);
for (int i=1;i<=n;i++) {
  scanf("%lld",a+i);
}
sort(a+1,a+n+1);
printf("%lld\n",a[(n/2)+(n%2)]);
return 0;
}
