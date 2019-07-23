#include <bits/stdc++.h>
using namespace std;
const int N=2e5+10;
long long n,q,m[N],dp[N],a,b,ans;
int main(){
scanf("%I64d %I64d ",&n,&q);
for(int i=1;i<=n;i++){scanf("%I64d",&m[i]);}
sort(m+1,m+n+1);
while(q--){
    scanf("%I64d %I64d",&a,&b);
    dp[a]++;
    dp[b+1]--;
}
for(int i=1;i<=n;i++){dp[i]=dp[i]+dp[i-1];}
sort(dp+1,dp+n+1);
for(int i=1;i<=n;i++){
       /// cout<<dp[i]<<" "<<m[i]<<endl;
        ans+=dp[i]*m[i];
}
printf("%I64d\n",ans);
}
/**

**/
