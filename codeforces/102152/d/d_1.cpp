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
const ll N=10+3,M=14;
int mem[N][N][N][N][N][N];
char a[N],b[N],c[N];
int ona,onb,onc,offa,offb,offc;
int t;
int dp(int a,int aa,int b,int bb,int c,int cc){
if((aa+a)==0){return 0;}
int &ret=mem[a][aa][b][bb][c][cc];
if(ret!=-1){return ret;}
ret=0;
if(a>0 && b>0  && c>0 ){ret=max(ret,1+ dp(a-1,aa,b-1,bb,c-1,cc) );}
if(a>0 && b>0 && cc>0 ){ret=max(ret,dp(a-1,aa,b-1,bb,c,cc-1) );}

if(a>0 && bb>0 && c>0){ret=max(ret, dp(a-1,aa,b,bb-1,c-1,cc) );}
if(a>0 && bb>0 && cc>0){ret=max(ret,1+ dp(a-1,aa,b,bb-1,c,cc-1) );}

if(aa>0 && b>0 && c>0){ret=max( ret,dp(a,aa-1,b-1,bb,c-1,cc) );}
if(aa>0 && b>0 && cc>0){ret=max(ret,1+ dp(a,aa-1,b-1,bb,c,cc-1) );}
if(aa>0 && bb>0 && c>0){ret=max(ret,1+ dp(a,aa-1,b,bb-1,c-1,cc) );}
if(aa>0 && bb>0 && cc>0){ ret=max(ret,dp(a,aa-1,b,bb-1,c,cc-1) );}
return ret;
}
int main(){
sc(t);
while(t--){
 scs(a);
 scs(b);
 scs(c);
 ona=onb=onc=offa=offb=offc=0;
 loop(i,0,9){ona+=(a[i]=='1');offa+=(a[i]=='0');}
 loop(i,0,9){onb+=(b[i]=='1');offb+=(b[i]=='0');}
 loop(i,0,9){onc+=(c[i]=='1');offc+=(c[i]=='0');}
 me(mem,-1);
 int ans=dp(ona,offa,onb,offb,onc,offc);
 loop(i,1,ans){printf("1");}
 loop(i,1,10-ans){printf("0");}
 printf("\n");
}

}
/**

**/
