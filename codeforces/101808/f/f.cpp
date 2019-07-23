#include <bits/stdc++.h>
#define F first
#define S second
#define ld long double
#define pb push_back
#define sz size
#define ll long long
using namespace std;
const int N=1e3+10,mod=7901;
ll n,x,t,f[N];
map<int , int > mp;
void st(){
f[0]=1;
for(int i=1;i<N;i++){f[i]=(f[i-1]*i)%mod;f[i]%=mod;}
}
int main(){
st();
scanf("%lld",&t);
while(t--){
    mp.clear();
    scanf("%lld",&n);
    ll ans=1;
    for(int i=0;i<n;i++){scanf("%lld",&x);mp[x]++;}
    for(auto x:mp){
        ans*=f[x.S];
        ans%=mod;
    }
    printf("%lld\n",ans);
  }
}
