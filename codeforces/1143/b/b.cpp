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
const int N=14;
ll mem[N][4][4],siz;
char s[N];
ll dp(int pos,int ok, int is){
if(pos==siz){return 1ll;}
ll &ret=mem[pos][ok][is];
if(ret!=-1){return ret;}
ret=0;
if(ok){
 loop(i,0,9){
   if(!is && i==0){ret=max(ret,dp(pos+1,ok,0) );}
   else{ret=max(ret,i*dp(pos+1,ok,1) );}
 }
}
else{
  int idx=s[pos]-'0';
  loop(i,0,idx-1){
     if(!is && i==0){ret=max(ret,dp(pos+1,1,0) );}
     else{ret=max(ret,i*dp(pos+1,1,1) );}
  }
  ret=max(ret,(idx)*dp(pos+1,0,1));
}
return ret;
}

int main(){
me(mem,-1);
scs(s);
siz=strlen(s);
cout<<dp(0,0,0)<<endl;
}

/**
100
7
1 2 3 4 4 3 2
7
2 4 4 4 3 2 1
5
3 2 2 1 1
5
1 1 2 2 3
5
1 2 3 2 1
**/
