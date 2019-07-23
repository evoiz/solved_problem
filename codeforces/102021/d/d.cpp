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
ll a[N],n;
int main(){
scll(n);
read_arr_ll(a,1,n)
ll l=0,h=a[1],sum=0;
loop(i,1,n-1){
  sum=a[i]-sum;
  if(i%2){
     h=min(h,sum);
     l=max(l,-a[i+1]+sum);
     continue;
  }
  h=min(h,a[i+1]-sum);
  l=max(l,-sum);
}
//cerr<<l<<" "<<h<<endl;
if(l>h){printf("0\n");return 0;}
printf("%lld\n",h-l+1);
}
/**

1 1 3 5
1 6 8 9
**/
