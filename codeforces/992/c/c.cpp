#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size
using namespace std;
ll x,k,mod=1e9+7;
ll power(ll a,ll n){
    if(n == 1)return a%mod;
    if(n == 0)return 1;
    a = a%mod;
    if(n&1)return ((a%mod)*(power((a*a)%mod,n>>1))%mod)%mod;
    return power((a*a)%mod,n>>1)%mod;
}

int main(){
    cin >> x >> k;
    if(k == 0){cout << (2*(x%mod))%mod;return 0;}
    if(x == 0){cout << 0;return 0;}
    ll ans = (((x%mod)*(power(2,k+1)%mod))%mod + mod +1 - (power(2,k))%mod)%mod;
    cout << ans;
    return 0;
}
