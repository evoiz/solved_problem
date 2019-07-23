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
const int N=1e6+10;
ll a1,b1,a2,b2,t;
const double eps = 1e-10;
int cmp(double a,double b){
if( fabs(a-b) < eps )return 0;
if( a-b > eps )return 1;return -1;
}
int main(){
scll(t);
while(t--){
scll(a1);scll(b1);scll(a2);scll(b2);
if(a1==0 && a2==0){printf("Lazy\n");continue;}
if(b1==0 && b2==0){printf("Lazy\n");continue;}
double a=b1*log(a1);
double b=b2*log(a2);
if(cmp(a,b)==0){printf("Lazy\n");continue;}
if(cmp(a,b)==-1){printf("Congrats\n");continue;}
if(cmp(a,b)==1){printf("HaHa\n");continue;}
}

}