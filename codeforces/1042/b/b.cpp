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
const int N=1e3+10,oo=INT_MAX-100;
pair<int,int> a[N];
ll n,sz,mem[N][10];
char s[4];
ll dp(int pos,int mask){
if(pos==n){return (mask==7?0:oo);}
ll &ret=mem[pos][mask];
if(ret!=-1){return ret;}
ret=min(dp(pos+1,mask),1ll*a[pos].F+dp(pos+1,mask|a[pos].S));
return ret;
}
int main(){
me(mem,-1);
scll(n);
loop(i,0,n-1){
sc(a[i].F);scs(s);
sz=strlen(s);
loop(j,0,sz-1){
a[i].S|=((s[j]=='A')<<0);
a[i].S|=((s[j]=='B')<<1);
a[i].S|=((s[j]=='C')<<2);
}
}
ll ans=dp(0,0);
if(ans==oo){ans=-1;}
printf("%lld\n",ans);
}
