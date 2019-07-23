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
const int N=510;
int a[N][N],b[N][N],c[N][N],p1,p2,n,m;
int main(){
sc(n);sc(m);
loop(i,0,n-1){
  loop(j,0,m-1){sc(a[i][j]);}
}
loop(i,0,n-1){
  loop(j,0,m-1){sc(b[i][j]);}
}
loop(i,0,n-1){
  loop(j,0,m-1){c[i][j]=a[i][j]^b[i][j];}
}
loop(i,0,n-1){
p1=0;
loop(j,0,m-1){p1+=c[i][j];}
if(p1%2){printf("NO\n");return 0;}
}
loop(j,0,m-1){
p1=0;
loop(i,0,n-1){p1+=c[i][j];}
if(p1%2){printf("NO\n");return 0;}
}
printf("YES\n");
}
/**

**/