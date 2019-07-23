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
const int N=1e2+10;
int a[12][N],b[12][N],c[12][N],n,m,k,ans=-1;
char s[15];
vector<pair<int,int>> tmp;
int  get(int k){
int ret=0;
for(auto x:tmp){
  if(x.F<=0){break;}
  int mn=min(x.S,k);
  ret+=x.F*mn;
  k-=mn;
}
return ret;
}
int main(){
sc(n);sc(m);sc(k);
loop(i,0,n-1){
  scs(s);
  loop(j,0,m-1){sc(a[i][j]);sc(b[i][j]);sc(c[i][j]);}
}
loop(i,0,n-1){
  loop(j,0,n-1){
    if(i==j){continue;}
    tmp.clear();
    loop(z,0,m-1){tmp.pb({b[j][z]-a[i][z],c[i][z]});}
    sort(all(tmp),greater< pair<int,int> >() );
    ans=max(ans,get(k));
  }
}
printf("%d\n",ans);
return 0;
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