#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size
using namespace std;
const int N=1e5+9;
ll n,ans;
int main(){
cin >> n;
 ll ans = n/100;n = n%100;
 ans += n/20;n = n%20;
 ans += n/10;n = n%10;
 ans += n/5;n = n%5 ;
 ans += n;
 cout << ans ;
    return 0;
}
/**
2
R23C55
BC23

**/
