#include <bits/stdc++.h>
#define F first
#define S second
#define ld long double
#define pb push_back
#define sz size
#define ll long long
using namespace std;
const int N=1e2+10;
ll oo=1e17;
ll a[N],mem[N][N][N],cost[N][N],n,m,k;
ll cal(int i,int j){return cost[i][j];}
ll dp(int pos,int kk,int last){
if(pos==n && kk==0){return 0;}
if(pos==n){return oo;}
if(mem[pos][kk][last]!=-1){return mem[pos][kk][last];}
ll ans=oo;
if(a[pos]!=0){bool ch=(last!=a[pos]);ans=min(ans,dp(pos+1,kk-ch,a[pos]));}
else{
   for(int i=1;i<=m;i++){
       bool ch=(last!=i);
       ans=min(ans,cal(pos,i)+dp(pos+1,kk-ch,i));
   }
}
return mem[pos][kk][last]=ans;
}
int main(){
memset(mem,-1,sizeof mem);
scanf("%lld%lld%lld",&n,&m,&k);
for(int i=0;i<n;i++){scanf("%lld",a+i);}
for (int i=0;i<n;i++){
        for (int j=1;j<=m;j++){
           scanf("%lld",&cost[i][j]);
        }
    }
    ll ans=dp(0,k,0);
    ans=(ans==oo?-1:ans);
    printf("%lld\n",ans);
}

