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
const int N=1e7+100,oo=1e9;
int ch[N];
int mem[N][10];
void sieve(){
//loop(i,1,10){all[i].pb(0);}
for(long long i=2;i<N-3;i++){
    if(!ch[i]){
        ch[i]=1;
        for(long long j=i*2;j<=N-3;j+=i){ch[j]++;}
    }
 }
 for(int i=2;i<N-3;i++){
   mem[i][ch[i]]=1;
 }
 loop(i,0,9){
   loop(j,1,N-3){
     mem[j][i]+=mem[j-1][i];
   }
 }
}
int main(){
sieve();
int t;
sc(t);
loop(tt,1,t){
 int l,r,k;
 sc(l);sc(r);sc(k);
 int ans=0;
 if(k<=8){
   ans=mem[r][k]-mem[l-1][k];
 }
 printf("Case #%lld: %d\n",tt,ans);
}

}

/**
100
9
0.0 0.0
0.0 1.0
0.0 -1.0
0.0 2.0
0.0 -2.0
2.0 0.0
4.0 0.0
-2.0 0.0
-4.0 0.0
**/
