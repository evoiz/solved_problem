#define ll long long
#include<bits/stdc++.h>
using namespace std;
const int N=1e5+3;
int a[N] , n;
long long  dp[N];
int main(){
	ll res = 0;
	cin >> n;
	for (int i = 1; i <= n; i++)cin >> a[i];
	for (int i = n-1 ; i >= 1  ; i--)
	{
		dp[i] = dp[i + 1] + a[i + 1];
	}
	//for (int i = 1; i <= n; i++) cout << dp[i]<<" " ;
	for (int i = 1; i <= n - 1; i++)
	{
		res += a[i]*dp[i];
	}
	cout << res;

	return 0;
}
