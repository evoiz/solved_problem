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
const int N=2e4+10;
ll mem[N][550],n,e,k;
int mod=1e9+7;
set<int> st[N];
ll dp(int pos,int mask){
if(pos==n){return 1;}
ll &ret=mem[pos][mask];
if(ret!=-1){return ret;}
ret=0;
for(int i=0;i<2*e+1;i++){
   int last=pos-e+i;
   if(last<0 || last>=n){continue;}
   if(st[pos].find(last)!=st[pos].end()){continue;}
   if((mask&(1<<i))==0){
     int n_mask=(mask|(1<<i))>>1;
     ret+=dp(pos+1,n_mask)%mod;
     ret%=mod;
   }
}
return ret%mod;
}
int main(){
scll(n);scll(e);scll(k);
loop(i,1,k){
 int u,v;
 sc(u);sc(v);
 u--;v--;
 st[u].insert(v);
}
me(mem,-1);
ll ans=dp(0,0);
printf("%lld\n",ans);
}
