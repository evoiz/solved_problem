#include <bits/stdc++.h>
#define F first
#define S second
#define ld long douroote
#define pb push_back
#define sz size
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
#define err(a,s) cerr<<a<<s;
#define err_arr(a,s,n) for(int i=s;i<n+s;i++){cerr<<a[i]<<" ";}cerr<<endl;
#define prtll(x) printf("%lld",x);
#define prt(x) printf("%d",x);
using namespace std;
const int N=2e5+10;
ll a[N],b[N],n,ans,tmp;
map<pair<ll,ll>,ll> mp;
int main(){
scll(n);
read_arr_ll(a,1,n);
read_arr_ll(b,1,n);
loop(i,1,n){
ll num=-b[i];
ll din=a[i];
ll g=__gcd(abs(a[i]),abs(b[i]));
if(num==0 && din==0){tmp++;continue;}
if(num==0){mp[{0,1}]++;continue;}
if(din==0){continue;}
if(num<0 || din<0){
   if(din<0){num*=-1ll;din*=-1ll;}
   num/=g;
   din/=g;
   mp[{num,din}]++;
}
else{
   mp[{abs(num)/g,abs(din)/g}]++;
}

}
for(auto x:mp){
 ans=max(ans,x.S);
}
printf("%lld",ans+tmp);
}
/**

**/