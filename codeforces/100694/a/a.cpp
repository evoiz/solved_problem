
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


const int N = 1e4 + 10 , M = 910 , mid = 201;
const int INF = 1e9 + 7;
const double eps = 1e-9 , PI = acos(-1);


int n , m;

int p[N], w[N], d[N];
int mem[N][M][3];

int dp(int i, int sum , int k){

	if (k < 0) return -INF;
	if (sum < -200) return -INF;

	if (i == n && sum >= 0){
		return 0;
	}
	if (i == n){
		return -INF;
	}

	int &ret = mem[i][sum + mid][k];
	if (ret != -1) return ret;

    return ret = max(dp(i + 1, sum , k), p[i] +
		  max(dp(i + 1, sum - w[i], k),
              dp(i + 1, sum - w[i] + d[i], k - 1)));

}

void solve(){

    scanf("%d %d", &n, &m);

	for(int i = 0 ; i < n ; i ++){
		scanf("%d %d %d", &p[i] , &w[i] , &d[i]);
	}

	memset(mem , -1 , sizeof mem);
	printf("%d\n" , dp(0 , m , 2));
}

int main(){

	int t = 1;
	//scanf("%d" , &t);

	while( t -- ){
        solve();
	}

	return 0;
}
