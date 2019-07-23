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
const int N=2e5+10;
ll mem[N][5],fr[4],n,l,r,l_,r_;
ll mod=1e9+7;
ll dp(int nn,int rem){
if(nn==n){return 1ll*(rem==0);}
ll &ret=mem[nn][rem];
if(ret!=-1){return 1ll*ret;}
ret=0ll;
for(int i=0;i<3;i++){
 ret+=1ll*(fr[i]%mod*dp(nn+1,(rem+i)%3)%mod)%mod;
 ret%=mod;
}
return ret;
}
int main(){
me(mem,-1);
scll(n);scll(l);scll(r);
if(r-l+1>2){
fr[0]=(r-l+1)/3;
fr[1]=(r-l+1)/3;
fr[2]=(r-l+1)/3;
ll tmp=(r-l+1)%3;
if(tmp>=1){fr[l%3]++;}
if (tmp>=2){fr[(l+1)%3]++;}
}
else if (l==r){
if ((n*(l))%3==0){printf("1\n");return 0;}
printf("0\n");return 0;
}
else{
fr[l%3]++;
fr[r%3]++;
}
cout<<dp(0,0)<<endl;
}
