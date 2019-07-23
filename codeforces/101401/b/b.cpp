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
const int N=2e5+10;
int pr[N][3],n,cnt;
char s[N];
int main(){
scs(s);
n=strlen(s);
loop(i,1,n-1){
 cnt+=(s[i]==':' && s[i-1]=='(');
 pr[i][0]=cnt;
}
cnt=0;
for(int i=n-2;i>=0;i--){
 cnt+=(s[i]==':' && s[i+1]==')');
 pr[i][1]=cnt;
}
int ans=0;
/**
loop(i,0,n-1){cerr<<pr[i][0]<<" ";}cerr<<endl;
loop(i,0,n-1){cerr<<pr[i][1]<<" ";}cerr<<endl;
**/
loop(i,0,n-1){
  ans=max(ans,pr[i][0]+pr[i+1][1]+( (s[0]==':') && (s[i+1]==')') ) );
}
printf("%d\n",ans);
}

