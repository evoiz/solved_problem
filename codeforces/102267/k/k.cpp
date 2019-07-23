/**  elias **/
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
const int N=(1ll<<17);
ll a[N],mem[52][N];
ll n,ans;
ll dp(int pos,int mask){
if(pos==n+1){return mask;}
ll &ret=mem[pos][mask];
if(ret!=-1){return ret;}
ret=0ll;
ret+=dp(pos+1,mask);	
ret+=dp(pos+1,mask|a[pos]);
return ret;	
}
int main(){
scll(n);
read_arr_ll(a,1,n);
me(mem,-1);
ll ans=dp(1,0);
printf("%lld\n",ans);
}
