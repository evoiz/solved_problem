#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size
using namespace std;
const int N=1e2+10;
ll a[N],cost[N],mem[N][N],n,t;
ll c(ll x){
int ans=0;
while(true){if(x&(1<<ans)){break;}ans++;}
return ans;
}
ll dp(int ind,int last){
if(ind==n+1){return 0ll;}
if(mem[ind][last]!=-1){return mem[ind][last];}
ll ans=-1;
if(a[ind]>a[last]){ans=max(ans,cost[ind]+dp(ind+1,ind));}
ans=max(ans,dp(ind+1,last));
return mem[ind][last]=ans;
}
int main(){
cerr<<c(10)<<endl;
scanf("%lld",&t);
while(t--){
memset(mem,-1,sizeof mem);
scanf("%lld",&n);for(int i=1;i<=n;i++){scanf("%lld",a+i);cost[i]=c(a[i]);}
ll ans=1ll*(dp(1,0));
printf("%lld\n",ans);
}
    return 0;
}
