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
#define F first
#define S second
#define ld long double
#define ll long long
#define pb push_back
#define sz size
using namespace std;
const int N=2010;
int mem[N][N],n,k;
int mod=1e9+7;
int dp(int ind,int kk){
if(ind>n){return 0;}
if(kk==k){return 1;}
int &ret=mem[ind][kk];
if(ret!=-1){return ret;}
ret=0;
for(int i=1;i<=(n/ind);i++){
  ret+=dp(ind*i,kk+1);
  ret%=mod;
}
return ret;
}
int main(){
me(mem,-1);
sc(n);sc(k);
ll ans=0;
for(int i=1;i<=n;i++){
 ans+=dp(i,1);
 //cerr<<ans<<endl;
 ans%=mod;
}
printf("%lld\n",ans);
}
/**
a
c
**/
