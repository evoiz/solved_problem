#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size
using namespace std;
const int N=1e5+10,oo=1e9+7,mod=1e9+7;
ll a[N],n,mem[N][3];
string ss,s;
ll dp(int ind,int ok){
if(ind==n){return 0;}
if(mem[ind][ok]!=-1){return mem[ind][ok];}
ll ans;
if(ok){
    if(s[ind]=='1'){ans=max(dp(ind+1,0),a[ind]+dp(ind+1,1));}
    else{ans=dp(ind+1,1);}
}
else{
    if(s[ind]=='1'){ans=max(dp(ind+1,0),a[ind]+dp(ind+1,0));}
    else{ans=max(dp(ind+1,0),a[ind]+dp(ind+1,0));}
}
return mem[ind][ok]=ans;
}
int main(){
//memset(mem,-1,sizeof mem);
scanf("%lld",&n);
for(int i=0;i<n;i++){scanf("%lld",a+i);}
cin>>s;
reverse(s.begin(),s.end());
reverse(a,a+n);
for(int i=n-1;i>=0;i--){
if(s[i]=='1'){mem[i][1]=max(mem[i+1][0],a[i]+mem[i+1][1]);}
else{mem[i][1]=mem[i+1][1];}
if(s[i]=='1'){mem[i][0]=max(mem[i+1][0],a[i]+mem[i+1][0]);}
else{mem[i][0]=max(mem[i+1][0],a[i]+mem[i+1][0]);}
}
ll ans=mem[0][1];
cout<<ans<<endl;
}
/**
101110
011101
1+6+1+2+1
**/
