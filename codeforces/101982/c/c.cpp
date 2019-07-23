#include<bits/stdc++.h>

using namespace std;
using ll  = long long;
using ii  = pair < int , int >;
using i3  = pair < int , ii >;
using vi  = vector < int >;
using vii = vector < ii >;
using vi3 = vector < i3 >;

const int N = 1010;
const ll INF = 1e12 , mod =  998244353;
const double eps = 1e-9 , PI = acos(-1);

int n , k;

int a[N];
int freq[N];
map < int , int > mp;
vi v;

ll mem[N][N];

ll dp(int i , int k){
    if(k == 0)return 1;
    if(i == v.size())return 0;

    ll &ret = mem[i][k];
    if(ret != -1)return ret;
    ret = dp(i + 1 , k)%mod;
    ret += (v[i] * dp(i + 1 , k - 1)) % mod;
    ret %= mod;

    return ret;
}

void solve(){
    scanf("%d %d" , &n , &k);

    int cnt = 0;
    for(int i = 0 ; i < n ; i ++){
        scanf("%d" , &a[i]);
        if(mp[a[i]] == 0){
            mp[a[i]] = ++ cnt;
        }
    }

    for(int i = 0 ; i < n ; i ++){
        a[i] = mp[ a[i] ];
        freq[ a[i] ] ++;
    }

    for(int i = 1 ; i <= n ; i ++){
        if(freq[i]){
            v.push_back(freq[i]);
        }
    }

    memset(mem , -1 , sizeof mem);
    printf("%lld\n" , dp(0 , k));

}

main(){
    int t = 1;
    //scanf("%d" , &t);

    while( t -- ){
            solve();
    }

    return 0;
}




