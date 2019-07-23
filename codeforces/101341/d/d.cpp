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

int n , X;

void solve(){
    scanf("%d %d" , &n , &X);

    int G = 0;
    for(int i = 0 ; i < n ; i ++){
        int x;
        scanf("%d" , &x);
        G = __gcd(x , G);
    }

    if(X % G == 0){
        printf("YES\n");
    }
    else {
        printf("NO\n");
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
