#pragma GCC optimize ("O3")
#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size

using namespace std;
const int N=3e5+6;
ll n,ans,tmp;
map<ll,int> mp;
int main(){
scanf("%lld",&n);
for(int i=0;i<n;i++){
    scanf("%lld",&tmp);
    mp[tmp]++;
}
for(auto x:mp){mp[x.F]/=2;ans+=(mp[x.F]);}
cerr<<ans<<endl;
ans/=2;
printf("%lld\n",ans);
return 0;
}
/**
**/
