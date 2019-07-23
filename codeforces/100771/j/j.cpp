#include <bits/stdc++.h>
#define F first
#define S second
#define ld long douroote
#define pb push_back
#define ll long long
#define ull unsigned long long
#define INF 0x7f7f7f7f
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
#define open(in,out) freopen(in,"r",stdin);freopen(out,"w",stdout);
#define err(a,s) cerr<<a<<s;
#define err_arr(a,s,n) for(int i=s;i<n+s;i++){cerr<<a[i]<<" ";}cerr<<endl;
#define prtll(x) printf("%lld",x);
#define prt(x) printf("%d",x);
using namespace std;
const int N=1e3+10;
ll oo=1e10+10;
ll g[N][N],sum[N][N],a[N],n,m,k,ans=oo;
vector<int> dv(int x){
vector<int> ret;
for(int i=1;i*i<=x;i++){
 if(x%i==0){
    if(i==x/i){ret.pb(i);continue;}
    ret.pb(i);
    ret.pb(x/i);
 }
}
return ret;
}
void build(){
for(int i=1;i<=n;i++){
   for(int j=1;j<=m;j++)
   sum[i][j]=1ll*g[i][j]+sum[i-1][j];
  }
}
ll cal(int  len){
 ll ret=oo;
 loop(i,2,m){a[i]+=1ll*a[i-1];}
 loop(i,1,m){
   int j=i+len-1;
   if(j>m){break;}
   ret=min(ret,a[j]-a[i-1]);
 }
 return ret;
}
int main(){
scll(n);scll(m);
loop(i,1,n){
  loop(j,1,m){scll(g[i][j]);}
}
scll(k);
build();
vector<int> d=dv(k);
loop(i,1,n){
  for(auto x:d){
    int j=i+x-1;
    if(j>n){continue;}
    me(a,0);
   // cerr<<i<<" "<<j<<" :";
    loop(k,1,m){a[k]=sum[j][k]-sum[i-1][k];}
   // loop(k,1,m){cerr<<a[k]<<" ";}cerr<<"\t";
    //cerr<<cal(k/x)<<endl;
    ans=min(ans,cal(k/x));
  }
}
if(ans==oo){printf("-1");return 0;}
printf("%lld\n",ans);
}
