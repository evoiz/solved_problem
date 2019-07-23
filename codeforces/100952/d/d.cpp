#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define INF 0x3f3f3f3f
#define maxn 100005
const ll mod=1000000007ll;
ll mem[509][509];
ll solve(ll n, ll c) {
	if(n<0 || c>n || c<0){return 0;}
	if(n == 0) return 1;
	if(mem[n][c]!=-1){return mem[n][c];}
	ll ans=((solve(n-1,c)%mod)+(solve(n-1,c-1)))%mod;
	return mem[n][c]=ans;
}
long long  t,n,m,d,k,a[205],numd,num;
int main(){
    memset(mem,-1,sizeof mem);
   ///// cout<<solve(1,1)<<endl;
    scanf("%d",&t);
    while(t--){
        scanf("%I64d%I64d%I64d%I64d",&n,&m,&k,&d);
        numd=0;
        num=0;
        for(int i=0;i<n;i++){scanf("%d",&a[i]);numd+=(a[i]>=d);}
        num=n-k;
       //// cout<<num<<" "<<numd<<endl;
        long long ans=0;
        for(ll i = k; i <= numd; i++){
			ans = (ans+((solve(numd,i)*solve(n-numd,m-i))%mod))%mod;
        }
        if(numd<k){ans=0;}
        printf("%I64d\n",ans);
    }
    return 0;
}
