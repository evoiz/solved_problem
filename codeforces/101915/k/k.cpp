#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
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
#define loop(s,e,st) for(int i=s;i<=e;i+=st)
#define read_arr(a,s,n) for(int i=s;i<n+s;i++){sc(a[i]);}
#define read_arr_ll(a,s,n) for(int i=s;i<n+s;i++){scll(a[i]);}
#define err(a,s) cerr<<a<<s;
#define err_arr(a,s,n) for(int i=s;i<n+s;i++){cerr<<a[i]<<" ";}cerr<<endl;
using namespace std;
const int N=50+5;
ll mem[N][N],mod=1e9+7,a[N],pr[N],suf[N],t,n,tmp;
char s[N];
ll dp(int l,int r){
if(r<=l){return 1ll;}
if(mem[l][r]!=-1){return mem[l][r];}
ll ans=1ll,aa=0ll,bb=0ll;
for(int i=l;i<r;i++){
   aa+=a[i];
   bb=0ll;
   for(int j=r;j>i;j--){
    bb+=a[j];
    if(aa==bb){
            ans+=dp(i+1,j-1);
            ans%=mod;
     }
   }
}
return mem[l][r]=ans%mod;
}
int main(){
  scll(t);
  while(t--){
    scs(s);
    n=strlen(s);
    for(int i=0;i<n;i++){a[i]=1ll*(s[i]-'0');cerr<<a[i]<<" ";}cerr<<endl;
    me(mem,-1);
    ll ans=dp(0,n-1);
    printf("%lld\n",ans);
  }
}
