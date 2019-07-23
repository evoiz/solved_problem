#include<bits/stdc++.h>
using namespace std;

using ll = long long;

typedef pair < int , int > ii;
typedef vector < int > vi;
typedef vector < ii > vii;
const int N = 1e5 + 5;
const ll INF = 1e12;

main(){
    int t;

    scanf("%d" , &t);

    while( t -- ){
        ll n , k;
        scanf("%lld %lld" , &n , &k);

        if(k >= n){
            printf("0\n");
            continue;
        }

        printf("%lld\n" , (n-k+5)/6);
    }

    return 0;
}
