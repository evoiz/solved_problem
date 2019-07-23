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
const int N=1e3+10;
int a[N],b[N],n;
bool ok(int x){
loop(i,1,n){
  if(a[i]+x==b[i]){continue;}
  if(a[i]+x>b[i]){return 1;}
  if(a[i]+x<b[i]){return 0;}
}

}
int bsr(int l,int h){
int mid;
while(l<h){
  mid=(l+h)/2;
  if(ok(mid)){h=mid;}
  else{l=mid+1;}
}
return l;
}
int main(){
sc(n);
read_arr(a,1,n);
read_arr(b,1,n);
int ans=bsr(0,N);
printf("%d\n",ans);
}
/**

1 1 3 5
1 6 8 9
**/
