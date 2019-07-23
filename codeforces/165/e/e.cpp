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
const int N=(1<<23)-1;
int n,a[N],bits=22,mem[N];
int dp(int mask){
int &ret=mem[mask];
if(ret!=-1){return ret;}
ret=-2;
for(int i=0;i<bits;i++){
  if(mask&(1<<i)){
    ret=max(ret,dp(mask-(1<<i)));
  }
}
return ret;
}
int get(int x){
int mask=(((1<<22)-1)-x);
int ret=dp(mask);
if(ret==-2){return -1;}
return ret;
}
int main(){
me(mem,-1);
sc(n);
loop(i,1,n){
  sc(a[i]);
  mem[a[i]]=a[i];
}
for(int i=0;i<(1<<bits);i+=1024){dp(i);}
loop(i,1,n){
  int ans=get(a[i]);
  printf("%d ",ans);
}
}
/**
AB
#D
**/
