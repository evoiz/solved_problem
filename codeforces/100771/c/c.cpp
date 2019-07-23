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
const int N=1e5+10;
ll a,mem[35][35][3],n,cnt;
bool bt(ll x){
while((x&1)==0){x>>=1ll;}
while(x){
 if((x&1)==0){return 0;}
 x>>=1ll;
}
return 1;
}
ll dp(int pos,int c,int ch){
if(pos<0){return ((c==cnt) && ch);}
ll &ret=mem[pos][c][ch];
if(ret!=-1){return ret;}
bool bit=a&(1<<pos);
ret=0;
if(bit){
  ret=max(ret,dp(pos-1,c+1,ch));
  if(ch){
   ret=max(ret,dp(pos-1,c,ch));
  }
}
else{
  ret=max(ret,dp(pos-1,c,ch));
  ret=max(ret,dp(pos-1,c+1,1));
}
return ret;
}
ll path(int pos,int c,int ch){
if(pos<0){return 0;}
ll ret=mem[pos][c][ch];
bool bit=a&(1<<pos);
if(bit){
  if(ch){
    if(ret==dp(pos-1,c,ch)){return path(pos-1,c,ch);}
  }
  if(ret==dp(pos-1,c+1,ch)){
    return (1ll<<pos)+path(pos-1,c+1,ch);
  }
}
else{
  if(ret==dp(pos-1,c,ch)){
    return path(pos-1,c,ch);
  }
  if(ret==dp(pos-1,c+1,1)){
    return (1ll<<pos)+path(pos-1,c+1,1);

  }
}

}
int main(){
scll(a);
cnt=__builtin_popcount(a);
ll xx=a;
while(xx){n++;xx>>=1;}
if (bt(a)){
   ll last=0;
   loop(i,0,31){if(a&(1ll<<i)){last=i+1;}}
   last=(1ll<<last)+(1ll<<(cnt-1))-1;
   printf("%lld\n",last);
   return 0;
}
me(mem,-1);
cerr<<dp(n-1,0,0)<<endl;
ll ans=path(n-1,0,0);
printf("%lld\n",ans);
}
