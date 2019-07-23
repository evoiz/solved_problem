#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size
using namespace std;
const int oo=1e9+7;
int n,a[1000],mem[111][111],b;
int dp(int ind,int bit){
if(bit<0){return -oo;}
if(bit==0 || ind==n){return 0;}
if(mem[ind][bit]!=-1){return mem[ind][bit];}
int ans=0,odd=0,even=0;
for(int i=ind;i<n-1;i++){
    even+=(a[i]%2==0);
    odd+=(a[i]%2==1);
   // cerr<<even<<" "<<odd<<endl;
    if(odd==even){ans=max(ans,1+dp(i+1,bit-abs(a[i]-a[i+1])));}
}
return mem[ind][bit]=ans;
}
int main(){
memset(mem,-1,sizeof mem);
scanf("%d%d",&n,&b);
for(int i=0;i<n;i++){scanf("%d",a+i);}
cout<<dp(0,b);
}
/**


**/
