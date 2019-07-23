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
const int N=1e3+10;
ll mem[129][129][N];
ll pw[129],mod=1e9+9;
ll k,b;
ll dp(int z,int o,int rem){
int pos=(z+o);
if(pos==b){return o*(rem==0);}
ll &ret=mem[z][o][rem];
if(ret!=-1){return ret;}
ret=0;
ret+=dp(z+1,o,rem)%mod;
ret%=mod;
	
ret+=dp(z,o+1,(rem+pw[pos])%k )%mod;
ret%=mod;
return ret;
}
int main(){
scll(k);scll(b);
pw[0]=1;
loop(i,1,b){pw[i]=(2*pw[i-1])%k;}
me(mem,-1);
ll ans=dp(0,0,0);
cout<<ans<<endl;
}
