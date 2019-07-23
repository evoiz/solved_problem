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
int main(){
scanf("%lld",&t);
while(t--){
scanf("%lld",&n);for(int i=1;i<=n;i++){scanf("%lld",a+i);cost[i]=c(a[i]);}
for(int i=0;i<=n+1;i++){mem[n+1][i]=0ll;}
for(int i=n;i>=0;i--){
    for(int j=0;j<i;j++){
       ll ans=-1;
       if(a[i]>a[j]){ans=max(ans,cost[i]+mem[i+1][i]);}
       ans=max(ans,mem[i+1][j]);
       mem[i][j]=ans;
    }
}
printf("%lld\n",mem[1][0]);
}
    return 0;
}
