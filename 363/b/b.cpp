#pragma GCC optimize ("O3")
#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size

using namespace std;
const int N=2e5;
long long sum[N],a[N],n,k,tmp,tans=1e9,ans;
int main(){
  scanf("%lld%lld",&n,&k);
    for(int i=1;i<=n;i++){
        scanf("%lld",a+i);
        tmp+=a[i];
        sum[i]=tmp;
        }
for(int i=k;i<=n;i++){
tmp=sum[i]-sum[i-k];
if(tmp<tans){ans=i-k+1;tans=tmp;}
}
printf("%lld\n",ans);
    return 0;
}
