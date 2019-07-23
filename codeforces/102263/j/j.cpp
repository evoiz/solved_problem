#include<bits/stdc++.h>
 
using namespace std;
using ll  = long long;
using ii  = pair < int , int >;
using pll = pair < ll , ll >;
using i3  = pair < int , ii >;
using vi  = vector < int >;
using vii = vector < ii >;
using vi3 = vector < i3 >;
 
const int N = 1e6 + 5;
const ll INF = 1e12;
const double eps = 1e-9 , PI = acos(-1);
 
char s[N];
ll mem[N][4];
 
ll dp(int i , int f){
    if(i == -1)return f;
 
    ll &ret = mem[i][f];
    if(ret != -1)return ret;
 
    ll tmp = 1ll * (int(s[i] - '0') + f);
    f = 0;
    if(tmp >= 10){
        tmp -= 10;
        f = 1;
    }
 
    return ret = min(tmp + dp(i-1 , f) , 1ll*10-tmp + dp(i-1 , 1));
}
 
void solve(){
    scanf("%s" , s);
    int n = strlen(s);
 
    memset(mem , -1 , sizeof mem);
    printf("%lld\n" , dp(n-1 , 0));
}
 
 
int main(){
    int t = 1;
    //scanf("%d" , &t);
 
    while( t -- ){
            solve();
    }
 
    return 0;
}
