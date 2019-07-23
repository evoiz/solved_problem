#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair < int , int > ii;
typedef pair < int , ii > i3;
typedef pair < ll , ll > pll;
typedef vector < i3 > vi3;
typedef vector < ii > vii;
typedef vector < int > vi;

const int N = 3e5 + 5;
const ll INF = 1e15;
const double eps = 1e-9 , PI = acos(-1);

int n , m;


struct node {
    ll a , h , dx;

    node(){
        a = h = dx = 0;
    }
};

ll h[N];
node a[N];
node st[N << 2];

node mrg(node a , node b){
    if(a.a == b.a){
        if(a.h < b.h)return a;
        return b;
    }
    if(a.a > b.a)return a;
    return b;

}

void build(int p , int l , int r){
    if(l == r){
        st[p] = a[l];
        return;
    }

    int mid = (l + r) >> 1;
    build(p << 1     , l       , mid);
    build(p << 1 | 1 , mid + 1 , r  );

    st[p] = mrg(st[p << 1] , st[p << 1 | 1]);
}

void update(int p , int l , int r , int dx , node val){
    if(l == r){
        st[p] = val;
        return;
    }

    int mid = (l + r) >> 1;
    if(dx <= mid)update(p << 1     , l       , mid , dx , val);
    else         update(p << 1 | 1 , mid + 1 , r   , dx , val);

    st[p] = mrg(st[p << 1] , st[p << 1 | 1]);
}

node empty_;

node query(int p , int l , int r , int S , int E){
    if(S <= l && r <= E)return st[p];
    if(E < l || S > r)  return empty_;

    int mid = (l + r) >> 1;
    node x = query(p << 1     , l       , mid , S , E);
    node y = query(p << 1 | 1 , mid + 1 , r   , S , E);

    return mrg(x , y);
}

bool cmp(node a , node b){
    if(a.h == b.h)return a.a < b.a;
    return a.h < b.h;
}

main(){
    empty_.a  = 0;
    empty_.h  = 0;
    empty_.dx = 0;
    scanf("%d" , &n);

    for(int i = 1 ; i <= n ; i ++){
        scanf("%lld %lld" , &a[i].a , &a[i].h);
        a[i].dx = i*1ll;
    }

    sort(a + 1 , a + 1 + n , cmp);

    for(int i = 1 ; i <= n ; i ++){
        h[i] = a[i].h;
    }

    build(1 , 1 , n);

    ll mx = -1;
    ll dx1 = 1 , dx2 = 2;
    for(int i = 1 ; i <= n ; i ++){

        int dx = upper_bound(h + 1 , h + 1 + n , a[i].a) - h - 1;

        update(1 , 1 , n , i , empty_);
        node nd = query(1 , 1 , n , 1 , dx);
        update(1 , 1 , n , i , a[i]);

        if(nd.a == 0){
            continue;
        }

        ll sum = 0;
        if(a[i].a >= nd.h)sum += nd.a;
        if(nd.a >= a[i].h)sum += a[i].a;

        if(sum > mx){
            mx  = sum;
            dx1 = a[i].dx;
            dx2 = nd.dx;
        }

    }
    mx = max(mx , 0ll);

    printf("%lld\n%lld %lld\n" , mx , dx1 , dx2);

    return 0;
}
