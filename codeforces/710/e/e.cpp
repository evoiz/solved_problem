#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size
#define OO 1e9

using namespace std;
const int N=1e7+5,oo=1e9+10;
ll mem[N],x,y,n;
ll dp(ll a){
if(a==1){return x;}
if(a==0){return 0;}
if(a>n || a<0){return oo;}
//cerr<<a<<endl;
if(mem[a]!=-1){return mem[a];}
ll ans=dp(a-1)+x;
if(a&1){ans=min(ans,dp((a+1)/2)+x+y);}
else{ans=min(ans,dp(a/2)+y);}
return mem[a]=ans;
}
int main(){
memset(mem,-1,sizeof mem);
scanf("%lld%lld%lld",&n,&x,&y);
for(int i=10;i<n;i+=1000){ll tmp=dp(i);}
ll ans=dp(n);
printf("%lld\n",ans);
}
