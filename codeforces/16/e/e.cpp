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
const int N=21;
double mem[(1<<21)],a[N][N];
int n;
int main(){
sc(n);
loop(i,0,n-1){
  loop(j,0,n-1){scanf("%lf",&a[i][j]);}
}

int mask=(1<<n)-1;
mem[mask]=1.0;
for(int i=mask;i>0;i--){
 int bit=__builtin_popcount(i);
 double p=2.0/(bit*(bit-1));
   loop(fa,0,n-1){
     loop(fb,fa+1,n-1){
          if( (i&(1<<fa)) && (i&(1<<fb)) ){
          //cerr<<mem[i]<<" "<<a[fb][fa]<<" "<<p<<endl;
          mem[i^(1<<fa)]+=mem[i]*a[fb][fa]*p;
          mem[i^(1<<fb)]+=mem[i]*a[fa][fb]*p;
       }
     }
   }
 }
loop(i,0,n-1){
printf("%.6lf ",mem[(1<<i)]);
}

}
