#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair < int , int > ii;
typedef vector < ii > vii;
const int N = 1e5 + 5;

main(){

    freopen("input.txt" , "r" , stdin);
    freopen("output.txt" , "w" , stdout);

    ll n , k;
    ll ans = 1 , cnt = 0;
    scanf("%lld %lld" , &n, &k);

    while( 1 ){
        if(ans >= n){
            printf("%lld\n" , cnt);
            return 0;
        }
        cnt ++;
        ans += ans * k;
    }
}
