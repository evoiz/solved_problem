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

int n;
int a[N];

void solve(){
    scanf("%d" , &n);

    ll sum = 0;
    for(int i = 0 ; i < n ; i ++){
        scanf("%d" , &a[i]);
        sum += a[i];
    }
    if(sum >= n){
        printf("NO\n");
        return;
    }

    printf("YES\n");
    int p = n-1;
    for(int i = n-1 ; i >= 0 ; i --){
        while(a[i] > 0){
            printf("%d %d\n" , i + 1 , p + 1);
            p --;
            a[i] --;
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


