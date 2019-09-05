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
int mem[55][260],n,k;
int dp(int pos,int sum){
if(pos==n){return (sum==0?0:1e9);}
if(sum<=0){return 1e9;}
int &ret=mem[pos][sum];
if(ret!=-1){return ret;}
ret=1+dp(pos+1,sum-2);
ret=min(ret,dp(pos+1,sum-3));
ret=min(ret,dp(pos+1,sum-4));
ret=min(ret,dp(pos+1,sum-5));
return ret;
}
int main(){
sc(n);sc(k);
me(mem,-1);
int ans=dp(0,k);	
printf("%d\n",ans);
}
