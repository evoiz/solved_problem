#pragma GCC optimize ("O3")
#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size

using namespace std;
const int N=7e5,mod=1e9+7,oo=1e9+10;
ll n,ans=0;
bool ok(ll x){ll ans=sqrtl(x);ans=ans*ans;return(ans==x);}
ll len(ll x){ll ans=0;while(x){ans++;x/=10ll;}return ans;}
char ss[20];
string s;
bool k;
int main(){
cerr<<len(10)<<endl;
scanf("%s",ss);
s=(string )ss;
ll mask=(1ll<<(s.length()));
cerr<<mask<<endl;
for(ll i=1;i<mask;i++){
//cerr<<tmp<<endl;
  ll sum=0;
  for(int j=0;j<s.length();j++){
     if(i&(1ll<<j)){sum*=10ll;sum+=s[j]-'0';}
     }
     //cerr<<sum<<endl;
     if(ok(sum) && sum){k=1;ans=max(ans,len(sum));}
}
ans=(k?s.length()-ans:-1);
printf("%lld\n",ans);
return 0;
}
/**
dp(i)=dp(i-1)+(3*segma(i))
dp(2)=3+(3*3)=12
dp(3)=12+(3*6)=30
dp(4)=30+(3*10)
**/
