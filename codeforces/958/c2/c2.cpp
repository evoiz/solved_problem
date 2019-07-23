#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size

using namespace std;
const int N=2e4+10,oo=1e9+10;
int n,k,mod,mem[N][53][102],a[N],ans;
int dp(int i,int kk,int sum){
if(i==n){
 if(kk==0){return sum;}
 return -oo;
}
if(kk==0){return -oo;}
if(mem[i][kk][sum]!=-1){return mem[i][kk][sum];}
int ans=0;
int tmp=(sum+a[i])%mod;
ans=max(ans,dp(i+1,kk,tmp));
ans=max(ans,tmp+dp(i+1,kk-1,0));
return mem[i][kk][sum]=ans;
}
int main(){
memset(mem,-1,sizeof mem);
scanf("%d%d%d",&n,&k,&mod);
for(int i=0;i<n;i++){scanf("%d",a+i);}
ans=dp(0,k,0);
cout<<ans<<endl;
}
/**
(16, 3, 24), (13, 9), (8), (7), (5, 12, 12).
4 + 3


**/
