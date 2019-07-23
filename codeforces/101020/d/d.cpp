#include <bits/stdc++.h>
using namespace std;
int t,n,ans,tmp,index,tans;
int m[20001],DP[20001];
int main(){
scanf("%d",&t);
while(t--){
memset(DP,0,sizeof DP);
scanf("%d",&n);
ans=0;
for(int i=0;i<n;i++){scanf("%d",&m[i]);}
for(int i=0; i<n; i++){DP[m[i]] = max(DP[m[i]], DP[m[i]-1] + 1);}
for(int i=0; i<n; i++){ans = max(ans, DP[m[i]]);}
  printf("%d\n",ans);
}
return 0;
}
