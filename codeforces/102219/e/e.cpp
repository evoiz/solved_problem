#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair < int , int > ii;
typedef pair < int , ii > i3;
typedef vector < i3 > vi3;
typedef vector < ii > vii;
typedef vector < int > vi;

const int N = 1010;
const int INF = 1e5;
const double eps = 1e-12 , PI = acos(-1);

int t , n;

int a[N];
int mem[N][N];
int col[N][N];
int color = 0;
vi v;

int dp(int i , int sum){

    if(sum > t)return -INF;

    if(i == n){
        return 0;
    }

    int &ret = mem[i][sum];

    if(col[i][sum] == color)return ret;
       col[i][sum] = color;
    ret = 0;

    ret = a[i] + dp(i + 1 , sum + a[i]);
    ret = max(ret , dp(i + 1 , sum));
    if(ret <= -INF)ret = -INF;
    return ret;
}

vi ans;

void path(int i , int sum){
    if(sum > t)return;
    if(i == n)return;

    int ans = a[i] + dp(i + 1 , sum + a[i]);
    if(ans == mem[i][sum]){
        path(i + 1 , sum + a[i]);
        v.push_back(a[i]);
    }
    else {
        ans = dp(i + 1 , sum);
        if(ans == mem[i][sum]){
            path(i + 1 , sum);
        }
    }
}

main(){

    while ( true ){

        scanf("%d" , &t);

        if(t == 0)break;

        scanf("%d" , &n);

        for(int i = 0 ; i < n ; i ++){
            scanf("%d" , &a[i]);
        }

        color ++;
        int ans = dp(0 , 0);

        v.clear();
        path(0 , 0);
        for(int i = v.size() - 1 ; i >= 0 ; i --)
            printf("%d " , v[i] , i == 0 ? '\n' : ' ');
        printf("%d\n" , ans);
    }

    return 0;
}
