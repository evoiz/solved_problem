#include<bits/stdc++.h>

using namespace std;
using ll  = long long;
using ii  = pair < int , int >;
using i3  = pair < int , ii >;
using vi  = vector < int >;
using vl  = vector < ll >;
using vii = vector < ii >;
using vi3 = vector < i3 >;

const int N = 2e5 + 5;
const ll INF = 1e12;
const double eps = 1e-9 , PI = acos(-1);

int n , m;
ll T[N];
ll B[N];

set < ll > TT;
set < ll > BB;


void solve(){
    scanf("%d %d" , &n , &m);

    for(int i = 1 ; i <= n ; i ++){
        ll x; scanf("%lld" , &x);
        TT.insert(x);
    }

    for(int i = 1 ; i <= m ; i ++){
        ll x; scanf("%lld" , &x);
        if(TT.find(x) != TT.end())continue;
        BB.insert(x);
    }

    int dx = 1;
    for(ll X : TT){
        T[dx] = X;
        dx ++;
    }

    dx = 1;
    for(ll X : BB){
        B[dx] = X;
        dx ++;
    }

    n = TT.size();
    m = BB.size();

    T[0]   = (long long)(-1e14);
    T[n+1] = (long long)(1e14);


    ll ans = 0ll;


    for(int i = 0 ; i <= n ; i ++){
        int dx = upper_bound(B + 1 , B + m + 1 , T[i]) - B;

        vl tmp; tmp.clear();
        for(int j = dx ; j <= m ; j ++){
            if(B[j] > T[i+1])break;
            tmp.push_back(B[j]);
        }

        if(tmp.size() == 0)continue;

        ll mn = 2ll * 1ll * abs(T[i+1] - tmp[0]);
           mn = min(mn , 2ll * 1ll * abs(tmp.back() - T[i]));
           mn = min(mn , T[i+1] - T[i]);

        ll D = T[i+1] - T[i];
           D *= 2ll;

        for(int j = 1 ; j < tmp.size() ; j ++){
            mn = min(mn , D - 2ll * abs(tmp[j] - tmp[j-1]));
        }

        ans += mn;
    }

    printf("%lld\n" , ans);
}

main(){
    int t = 1;
    //scanf("%d" , &t);

    while( t -- ){
            solve();
    }

    return 0;
}
