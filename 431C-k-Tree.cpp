/** dp coin change **/
#include <bits/stdc++.h>
using namespace std;
const long long  Mod=(1e9)+7;
long long mem[102][3],n,k,d;
long long  dp(long long sum,bool ok){
 if(sum==n && ok) {return 1;}
if(sum>=n){return 0;}
if(mem[sum][ok]!=-1){return mem[sum][ok];}
  long long ans=0;
  for(int i=1;i<=k;i++){ans = (ans%Mod + (dp(sum+i,( ok || i>=d ? 1 : 0)))%Mod)%Mod;}
  return mem[sum][ok]=ans;
}
int main() {
memset(mem,-1,sizeof mem);
cin>>n>>k>>d;
cout<<dp(0,0)<<endl;
	return 0;
}
