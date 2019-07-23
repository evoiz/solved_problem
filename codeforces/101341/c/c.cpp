#include<bits/stdc++.h>

using namespace std;
using ll  = long long;
using ii  = pair < int , int >;
using i3  = pair < int , ii >;
using vi  = vector < int >;
using vii = vector < ii >;
using vi3 = vector < i3 >;

const int N = 2e5 + 5;
const ll INF = 1e12;
const double eps = 1e-9 , PI = acos(-1);

ll a , b , c , n , m;

void solve(){
    scanf("%lld %lld %lld" , &a , &b , &c);
    scanf("%lld %lld" , &n , &m);


    if((n >= c + a) && (m >= c + b)){
        printf("%lld\n" , a + b + c);
    }
    else {
       if(n >= c + a){
            printf("%lld\n" , m);
       }
       else if(m >= c + b){
            printf("%lld\n" , n);
       }
       else {
            printf("%lld\n" , min(n , m));
       }
    }

}

main(){
    int t = 1;
    //scanf("%d" , &t);

    while( t -- ){
            solve();
    }

    return 0;
}


