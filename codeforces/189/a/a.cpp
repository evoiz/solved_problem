#include <bits/stdc++.h>

using namespace std;
int m[3];
int mem[4007][4007];
int dp(int p, int l)
{
    if(l<0){return 0;}
    if(l==0){return p;}
    if(mem[p][l]!=-1){return mem[p][l];}
    int ans;
    ans=max(dp(p+1,l-m[0]),max(dp(p+1, l-m[1]),dp(p+1, l-m[2])));
    return mem[p][l]=ans;
}
int main()
{
    int x;cin>>x;
   for(int i=0;i<3;i++){
    cin>>m[i];
   }
   memset(mem,-1,sizeof mem);
   cout<<dp(0,x)<<endl;
    return 0;
}
