#include<bits/stdc++.h>

using namespace std;
using ll  = long long;
using ii  = pair < int , int >;
using i3  = pair < int , ii >;
using vi  = vector < int >;
using vii = vector < ii >;
using vi3 = vector < i3 >;

const int N = 1010;
const ll INF = 1e12;
const double eps = 1e-9 , PI = acos(-1);

ll   a[N][N];
ll  MX[N][N];
ll MX2[N][N];
ll MX3[N][N];
ll MX4[N][N];

int n , m;

void build( ){

    for(int i = 1 ; i <= n ; i ++){
        for(int j = 1 ; j <= m ; j ++){
            MX[i][j] = max(max( max(a[i][j] , MX[i][j-1]) , MX[i-1][j] ) , MX[i-1][j-1]);
        }
    }

    for(int i = n ; i >= 1 ; i --){
        for(int j = 1 ; j <= m ; j ++){
            MX2[i][j] = max(max( max(a[i][j] , MX2[i][j-1]) , MX2[i+1][j] ) , MX2[i+1][j-1]);
        }
    }

    for(int i = 1 ; i <= n ; i ++){
        for(int j = m ; j >= 1 ; j --){
            MX3[i][j] = max(max( max(a[i][j] , MX3[i][j+1]) , MX3[i-1][j] ) , MX3[i-1][j+1]);
        }
    }

    for(int i = n ; i >= 1 ; i --){
        for(int j = m ; j >= 1 ; j --){
            MX4[i][j] = max(max( max(a[i][j] , MX4[i][j+1]) , MX4[i+1][j] ) , MX4[i+1][j+1]);
        }
    }

}

void solve(){


        scanf("%d %d" , &n , &m);

        for(int i = 1 ; i <= n ; i ++){
            for(int j = 1 ; j <= m ; j ++){
                scanf("%lld" , &a[i][j]);
            }
        }

        build();

        ll ans = 1e9+7;
        int row = 1 , column = 1;
        for(int i = 1 ; i <= n ; i ++){
            for(int j = 1 ; j <= m  ; j ++){
                ll mx = 0;

                mx = max(MX[i-1][j-1] , mx);
                mx = max(MX4[i+1][j+1] , mx);
                mx = max(MX2[i+1][j-1] , mx);
                mx = max(MX3[i-1][j+1] , mx);

                if(mx < ans){
                    ans = mx;
                    row = i;
                    column = j;
                }
            }
        }
        printf("%d %d\n" , row , column);
}

main(){
    int t = 1;
    //scanf("%d" , &t);

    while( t -- ){
            solve();
    }

    return 0;
}

