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
const int N=250+10;
ll mem[N][N],n,ans;
ll dp(int sum,int last){
if(sum==0){return 1;}
if(sum<0){return 0;}
ll &ret=mem[sum][last];
if(ret!=-1){return ret;}
ret=0;
for(int i=last;i>=1;i--){
   ret+=dp(sum-i,i);
}
return ret;
}
int main(){
for(int i=0;i<=250;i++){
  for(int j=0;j<=250;j++){
    dp(i,j);
  }
}
me(mem,-1);
while(scll(n) ){
if(n==0){break;}
ans=0;
for(int i=n;i>=1;i--){
  if((n-i)%2==0){ans+=1ll*dp((n-i)/2,i);}
  if((n-(2*i))%2==0){
    ans+=1ll*dp((n-(2*i))/2,i);
  }
}
printf("%lld\n",ans);
}
}

/**


**/
