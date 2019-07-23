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
const ll INF = 1e12;
const double eps = 1e-9 , PI = acos(-1);

int n , k;

struct que {
    int c , dx;
    int p1 = 0 , p2 = 0;

    que(){};
};

que st[N << 2];

que mrg(que a , que b){
    double add1 = a.p1 + a.p2;
    if(a.p1 > 0 && a.p2 > 0)add1 /= 2.0;

    double add2 = b.p1 + b.p2;
    if(b.p1 > 0 && b.p2 > 0)add2 /= 2.0;

    double tmp1 = 1.0 * a.c * add1;
    double tmp2 = 1.0 * b.c * add2;

    if(tmp1 <= tmp2)return a;
    return b;
}

void build(int p , int l , int r){
    if(l == r){
        st[p].dx = l;
        return;
    }

    int mid = (l + r) >> 1;
    build(p << 1 , l , mid);
    build(p << 1 | 1 , mid + 1 , r);

    st[p] = mrg(st[p << 1] , st[p << 1 | 1]);
}

void update(int p , int l , int r , int dx , int x){
    if(l == r){
        st[p].c ++;
        swap(st[p].p1 , st[p].p2);
        st[p].p2 = x;
        return;
    }

    int mid = (l + r) >> 1;
    if(dx <= mid)update(p << 1 , l , mid , dx , x);
    else update(p << 1 | 1, mid + 1 , r , dx , x);

    st[p] = mrg(st[p << 1] , st[p << 1 | 1]);
}

void solve(){
    scanf("%d %d" , &n , &k);

    build(1 , 1 , k);

    for(int i = 1 ; i <= n ; i ++){
        int x;
        scanf("%d" , &x);
        printf("%d " , st[1].dx);
        update(1 , 1 , k , st[1].dx , x);
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


