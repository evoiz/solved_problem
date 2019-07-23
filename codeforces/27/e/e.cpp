#include <bits/stdc++.h>
#define f first
#define s second
#define ll long long
using namespace std;
const int N=1e3+100;
ll oo=LLONG_MAX,mx=1e18;
ll n,pr[]={2,3,5,7,11,13,17,19,23,29,31,37,41,43},mem[N][10];
vector <ll> dv;

ll pow_(ll a,ll b){
 if(!b){return 1ll;}
 if(b&1){return max(-1LL, a*pow_(a,b-1));}
    ll res = pow_(a,b/2);
    if(res >1e9 || res <0){return -1ll;}
    res *=res;
    return res;
}

void start(ll n){
    for(int i=2;i*i<=n;i++){
        if(n%i == 0){
        dv.push_back(i),
        dv.push_back(n/i);
        }
    }
    dv.push_back(n);
}
ll dp(int nn,int ind){
if(nn>n){return oo;}
if(nn==n){return 1ll;}
if(ind==10){return oo;}
if(mem[nn][ind]!=-1){return 1ll*mem[nn][ind];}
ll ans=dp(nn,ind+1);
 for(auto x:dv){
        ll num=nn*x;
        ll pw=pow_(pr[ind],x-1);
        if(pw==-1){continue;}
        ll  nx=dp(num,ind+1);
        if(pw > mx/nx){continue;}
        ans = min(ans,nx*pw);
    }
return mem[nn][ind]=1ll*ans;
}
int main(){
memset(mem,-1,sizeof mem);
scanf("%lld",&n);
start(n);
ll ans=dp(1,0);
printf("%lld\n",ans);
}
/**

5
0 1 1 3 4
1 2 3 4 5

   0
      1
   2    3
     5 4

**/