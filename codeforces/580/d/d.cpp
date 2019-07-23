#include <bits/stdc++.h>
#define F first
#define S second
#define ld long double
#define pb push_back
#define sz size
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
#define F first
#define S second
#define ld long double
#define ll long long
#define ull unsigned long long
#define pb push_back
#define sz size
#define INF 0x7f7f7f7f
using namespace std;
const int N =(1<<19)+10;
ll mem[N][20],add[20][20],n,m,k,a[20],x,y,c;
ll dp(ll mask,int last){
if(__builtin_popcount(mask)==m){return 0;}
ll &ret=mem[mask][last];
if(ret!=-1){return ret;}
ret=0;
for(int i=0;i<n;i++){
if((mask&(1<<i))==0){ret=max(ret,add[i][last]+a[i]+dp(mask|(1<<i),i));}
}
return ret;
}
int main(){
me(mem,-1);
scll(n);scll(m);scll(k);
read_arr_ll(a,0,n);
loop(i,0,k-1){scll(x);scll(y);scll(c);add[x-1][y-1]=c;}
ll ans=dp(0,n);
cout<<ans<<endl;
}
