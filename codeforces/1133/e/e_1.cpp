#include <bits/stdc++.h>
#define F first
#define S second
#define ld long douroote
#define pb push_back
#define sz size
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
#define err(a,s) cerr<<a<<s;
#define err_arr(a,s,n) for(int i=s;i<n+s;i++){cerr<<a[i]<<" ";}cerr<<endl;
#define prtll(x) printf("%lld",x);
#define prt(x) printf("%d",x);
using namespace std;
const int N=5e3+10;
ll mem[N][N],n,k,a[N];
ll dp(int pos,int k){
if(k==0){return 0;}
if(pos==n){return 0;}
ll &ret=mem[pos][k];
if(ret!=-1){return ret;}
ret=dp(pos+1,k);
ll d=upper_bound(a+pos,a+n,a[pos]+5)-a;
ret=max(ret,d-pos+dp(d,k-1));
return ret;
}
int main(){
me(mem,-1);
scll(n);scll(k);
read_arr_ll(a,0,n);
sort(a,a+n);
ll ans=dp(0,k);
printf("%lld\n",ans);
}
