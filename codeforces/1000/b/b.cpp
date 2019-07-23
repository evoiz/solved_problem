#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size
using namespace std;
const int N=1e5+10;
ll n,m,a[N],on[N],mem[2][N],cnt;
int main() {
	scanf("%lld%lld",&n,&m);
	on[0]=1;
	a[n+1]=m;
	on[n+1] = 0;
	for (int i = 1; i <= n; i++) {scanf("%lld", a + i);on[i] =!on[i-1];}
	for (int i = n; i >= 0; i--) {
		mem[0][i]=mem[0][i+1]+(1ll*on[i]*(a[i + 1] - a[i]));
		mem[1][i]=mem[1][i+1]+(1ll*(!on[i])*(a[i + 1] - a[i]));
	}
	ll ans = mem[0][0];
	for (int i = 0; i <= n; i++) {
    if (!on[i]){cnt+=1ll*(a[i]-a[i - 1]);ll tmp=cnt+(a[i + 1] - (a[i] + 1))+mem[1][i + 1];ans=max(ans, tmp);}
    }

	printf("%lld\n", ans);
	return 0;
}
