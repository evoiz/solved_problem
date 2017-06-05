#include <bits/stdc++.h>
using namespace std;
const int N=1e5+2;
long long mem[N],m[N],n;
long long tmp,mx;
long long dp(int i){
if(i==0){return 0;}
if(i==1){return m[1];}
if(mem[i]!=-1){return mem[i];}
long long ans=max(dp(i-1),dp(i-2)+m[i]*i);
return mem[i]=ans;
}
int main()
{
cin.sync_with_stdio(false);
cout.sync_with_stdio(false);
memset(mem,-1,sizeof mem);
 cin>>n;
 for(int i=0;i<n;i++){cin>>tmp;m[tmp]++;mx=max(tmp,mx);}
 cout<<dp(mx)<<endl;
    return 0;
}
