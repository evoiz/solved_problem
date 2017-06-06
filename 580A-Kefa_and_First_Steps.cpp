#include <bits/stdc++.h>
using namespace std;

const int N =100100;
int n,a[N],ans,dp[N];
int main(){
cin>>n;
for(int i=0;i<n;i++)cin>>a[i];
dp[0]=1;
for(int i=1;i<n;i++){
    if(a[i]>=a[i-1]){dp[i]=1+dp[i-1];}
    else{dp[i]=1;}
}
for(int i=0;i<n;i++){ans=max(ans,dp[i]);}
cout<<ans<<endl;
return 0;
}
