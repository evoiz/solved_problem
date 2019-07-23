#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const int N = 22;

ll a[N];
ll m;
ll n , k , dx , ans = 33 , ansMask = 0;


main(){
    
    freopen("input.txt" , "r" , stdin);
    freopen("output.txt" , "w" , stdout);

    scanf("%lld %lld" , &n , &m);

    for(int i = 0 ; i < n ; i ++){

        scanf("%lld" , &k);

        a[i] = (1ll << m) - 1ll;

        for(int j = 0 ; j < k ; j ++){
            scanf("%lld" , &dx);
            dx --;
            a[i] &= ~(1ll << dx);
        }
    }


    for(ll mask = 0 ; mask < (1ll << n) ; mask ++){

        ll M = (1ll << m) - 1ll;

        for(ll j = 0 ; j < n ; j ++){
            if(mask & (1ll << j)){
                M &= a[j];
            }
        }

        if(M == 0){
            int num = __builtin_popcount(mask);
            if(num < ans){
                ans = num;
                ansMask = mask;
            }
        }
    }

    printf("%lld\n" , ans);
    for(ll i = 0 ; i < n ; i ++){
        if(ansMask & (1ll << i))printf("%d " , i + 1);
    }printf("\n");
}
