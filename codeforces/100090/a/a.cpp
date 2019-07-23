#include <bits/stdc++.h>
#define F first
#define S second
#define ld long double
#define pb push_back
#define sz size
#define sc(a) scanf("%d",&a)
#define scll(a) scanf("%lld",&a)
#define scc(a) scanf(" %c",&a)
#define scs(a) scanf(" %s",a)
#define me(a,b) memset(a,b,sizeof a)
#define all(a) a.begin(),a.end()
#define allr(a,n) a,a+n
#define loop(a,s,e) for(ll a=s;a<=e;a++)
#define read_arr(a,s,n) for(int i=s;i<n+s;i++){sc(a[i]);}
#define read_arr_ll(a,s,n) for(int i=s;i<n+s;i++){scll(a[i]);}
#define err(a,s) cerr<<a<<s;
#define err_arr(a,s,n) for(int i=s;i<n+s;i++){cerr<<a[i]<<" ";}cerr<<endl;
#define F first
#define S second
#define ld long double
#define ll long long
#define pb push_back
#define sz size
using namespace std;
const int N = 2555;
 
char a[N][N];
int n , m;
 
int row[N][N];
int col[N][N];
 
int r1 , c1 , r2 , c2;
 
bool ok(int x , int y){
 
        bool ret1 = 0;
        bool ret2 = 0;
        if(y == c1){
            if(abs(col[y][max(x , r1)] - col[y][min(x , r1)-1]) == 0)ret1 |= 1;
        }
        if(y == c2){
            if(abs(col[y][max(x , r2)] - col[y][min(x , r2)-1]) == 0)ret2 |= 1;
        }
 
        if(x == r1){
            if(abs(row[x][max(y , c1)] - row[x][min(y , c1)-1]) == 0)ret1 |= 1;
        }
 
        if(x == r2){
            if(abs(row[x][max(y , c2)] - row[x][min(y , c2)-1]) == 0)ret2 |= 1;
        }
 
        return ret1 & ret2;
}
 
int main(){
    scanf("%d %d" , &n , &m);
 
    for(int i = 1 ; i <= n ; i ++){
            scanf("%s" , a[i] + 1);
    }
 
    for(int i = 1 ; i <= n ; i ++){
        for(int j = 1 ; j <= m ; j ++){
                row[i][j] += row[i][j-1] + (a[i][j] == '#');
                col[j][i] += col[j][i-1] + (a[i][j] == '#');
        }
    }
 
    int q;
    scanf("%d" , &q);
 
    while( q -- ){
        scanf("%d %d %d %d" , &r1 , &c1 , &r2 , &c2);
 
        if(ok(r1 , c2) || ok(r2 , c1)){
            printf("YES\n");
        }else printf("NO\n");
    }
 
    return 0;
}
/**
3 2
2 3 5
15
moveLeft
insertLeft 1
moveLeft
print
moveLeft
moveRight
print
moveRight
insertRight 4
moveRight
moveRight
print
moveRight
moveLeft
print
**/