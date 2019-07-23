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
const ll mod=1e9+7;
const int N=1e2+10;
ll f[N],inv[N];
ll pow_(ll a,ll b){
    ll ans=1ll;
    while(b){
        if(b&1)ans=ans*a%mod;
        a=a*a%mod;
        b>>=1;
    }
    return ans;
}
void init(){
    f[0]=inv[0]=1;
    for(int i=1; i<N; i++){
            f[i]=1ll*i*f[i-1]%mod,inv[i]=pow_(f[i],mod-2);
    }
}
ll C(int n,int m){
    return f[n]*inv[n-m]%mod*inv[m]%mod;
}
ll len,mem[N][13],a[13];
ll dp(int len,int digit){
if(digit==9){return (a[digit]<=len);}
ll &ret=mem[len][digit];
if(ret!=-1){return ret;}
ret=0ll;
loop(k,a[digit],len){
  ll com=0ll;
  if(digit==0){com=C(len-1,k);}
  else{com=C(len,k);}
  ret+=com*(dp(len-k,digit+1));
  ret%=mod;
}
return ret;
}
int main(){
init();
scll(len);
read_arr_ll(a,0,10);
ll ans=0ll;
me(mem,-1);
loop(i,0,len){
 ans+=dp(i,0);
 ans%=mod;
}
printf("%lld\n",ans);
}
/**
2 2
NES
S
WS
3 2
NSWE
SW
SEW
NEW
SN
**/
