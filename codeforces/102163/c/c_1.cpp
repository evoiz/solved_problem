#include<bits/stdc++.h>
using namespace std;

using ll = long long;

typedef pair < int , int > ii;
typedef vector < int > vi;
typedef vector < ii > vii;
const int N = 1010;
const ll INF = 1e12 , mod = 1e9 + 7;

int t , n , k;
ii a[N];

ll dp[N][N];
ll st[N << 2];

void update(int p , int l , int r , int dx , ll x){
    if(l == r){
        st[p] = x;
        return;
    }
    int mid = (l + r) >> 1;
    if(dx <= mid)update(p << 1     , l       , mid , dx , x);
    else         update(p << 1 | 1 , mid + 1 , r   , dx , x);

    st[p] = (st[p << 1] % mod + st[p << 1 | 1] % mod) % mod;
}

ll rsq(int p , int l , int r , int S , int E){
    if(l >= S && r <= E)return st[p];
    if(E < l || S > r)return 0;

    int mid = (l + r) >> 1;

    ll x = rsq(p << 1 , l , mid , S , E);
    ll y = rsq(p << 1 | 1 , mid + 1 , r , S , E);

    return (x % mod + y % mod) % mod;
}

bool cmp(ii a , ii b){
    if(a.first == b.first)return a.second > b.second;
    return a.first < b.first;
}

int mem[N][N];

int dp2(int i , int last){
    if(i == n+1)return 0;

    int &ret = mem[i][last];

    if(ret != -1)return ret;
    ret = 0;

    ret = dp2(i + 1 , last);
    if(a[i].first > a[last].first){
        ret = max(ret , 1 + dp2(i + 1 , i));
    }

    return ret;
}

main(){
    scanf("%d" , &t);

    while( t -- ){

        scanf("%d" , &n);

        memset(a , 0 , sizeof a);

        for(int i = 1 ; i <= n ; i ++){
            scanf("%d" , &a[i].first);
            a[i].second = i;
        }

        memset(mem , -1 , sizeof mem);
        k = dp2(1 , n+1);

        sort(a + 1 , a + n + 1 , cmp);

        for(int i = 1 ; i <= n ; i ++)
            dp[i][0] = 1;

        for(int j = 1 ; j <= k ; j ++){

            memset(st , 0 , sizeof st);

            for(int i = 1 ; i <= n ; i ++){

                int dx = a[i].second;

                dp[dx][j] = rsq(1 , 1 , n , 1 , dx) % mod;
                update(1 , 1 , n , dx , dp[dx][j-1]);
            }
        }

        ll ans = 0;
        for(int i = 1 ; i <= n ; i ++){
            ans = ( (ans % mod) + (dp[i][k-1] % mod) ) % mod;
        }

        printf("%d %lld\n" , k , ans);
    }
}

