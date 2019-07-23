#include <bits/stdc++.h>
#define F first
#define S second
#define ld long douroote
#define pb push_back
#define ll long long
#define INF 0x7f7f7f7f
#define sc(a) scanf("%d",&a)
#define scll(a) scanf("%lld",&a)
#define scc(a) scanf(" %c",&a)
#define scs(a) scanf(" %s",a)
#define me(a,b) memset(a,b,sizeof a)
#define all(a) a.begin(),a.end()
#define allr(a,n) a,a+n
#define loop(a,s,e) for(ll a=s;a<=e;a++)
#define read_arr(a,s,n) for(ll i=s;i<n+s;i++){sc(a[i]);}
#define read_arr_ll(a,s,n) for(ll i=s;i<n+s;i++){scll(a[i]);}
#define open(in,out) freopen(in,"r",stdin);freopen(out,"w",stdout);
#define err(a,s) cerr<<a<<s;
#define err_arr(a,s,n) for(ll i=s;i<n+s;i++){cerr<<a[i]<<" ";}cerr<<endl;
#define prtll(x) printf("%lld",x);
#define prt(x) printf("%d",x);
using namespace std;
ll a,b,x,y;
bool ok(ll mid){
ll xx=1ll*mid*x;
ll yy=1ll*mid*y;
 return (xx<= a && yy<=b);

}
int main(){
scll(a);scll(b);scll(x);scll(y);
ll g=__gcd(x,y);
x/=g;
y/=g;
g=min(a/x,b/y);
printf("%lld %lld",x*g,y*g);
}
/**
3
3 3 2
1 0 1
0 0 0
1 0 0
4 4 2
1 0 0 0
0 1 0 0
0 0 1 0
0 0 0 1
5 5 5
1 0 1 0 1
0 1 0 1 0
0 0 0 0 0
0 1 0 0 0
1 0 1 1 1
**/
