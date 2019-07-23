#include<bits/stdc++.h>
using namespace std;

using ll = long long;
const int N = 1e5 + 5;

int n , k;
ll a[N];
vector < ll > v;

bool ok(ll x , bool f){
    int dx  = 0;
    int cnt = 1;
    while( true ){
        if(f)v.push_back(a[dx]);
        if(cnt == k)return 1;
        dx = lower_bound(a , a + n , a[dx] + x) - a;
        if(dx >= n)return 0;
        cnt ++;
    }
}

main(){
    scanf("%d %d" , &n , &k);

    for(int i = 0 ; i < n ; i ++){
        scanf("%lld" , &a[i]);
    }

    sort(a , a + n);

    ll low = 1 , high = 1e18 , mid;
    ll ans = 0;
    while(low < high){
        mid = (low + high) >> (1ll);

        if(ok(mid , 0)){
            ans = mid;
            low = mid + 1;
        }
        else high = mid;
    }

    ok(ans , 1);

    for(int i = 0 ; i < k ; i ++){
        printf("%lld%c" , v[i] , (i == k-1 ? '\n' : ' '));
    }
}
