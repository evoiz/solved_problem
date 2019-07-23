#include<bits/stdc++.h>

using namespace std;


using ll  = long long;
using ii  = pair < int , int >;
using i3  = pair < int , ii >;
using li  = pair < ll , int >;
using vi  = vector < int >;
using vl  = vector < ll >;
using vii = vector < ii >;
using vli = vector < li >;
using vi3 = vector < i3 >;


const int N = 2e5 + 5;
const ll INF = 1e15;
const double eps = 1e-9 , PI = acos(-1);

ll p , n , x;

void solve(){
    scanf("%lld %lld %lld" , &p , &n , &x);

    ll ans = min( x/p + x%p , x/p + 1 + (p - x%p) );

    if(x/p == n/p){
        ans = min(ans , x/p + min(x%p , n%p - (x%p) + 1));
    }

    ll dis = (n + p - 1) / p;
    ll diff = n - x;

    dis += min(diff/p + diff%p , diff/p + 1 + (p - diff%p));

    printf("%lld\n" , min(ans , dis));
}

main(){
    int t = 1;
    //scanf("%d" , &t);

    while( t -- ){
            solve();
    }

    return 0;
}

