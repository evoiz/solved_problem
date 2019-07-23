
#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size
#define sc(a) scanf("%d",&a)
#define scll(a) scanf("%lld",&a)
#define scc(a) scanf(" %c",&a)
#define scs(a) scanf(" %s",a)
using namespace std;
const int N=1e4+10,oo=1e9+7,mod=1e9+7;
ll t;
ll  a,b,d,m;

ll solve(){
ll n=(ll)sqrt(m)+1ll;
ll an = 1ll;
for (ll i=0;i<n;i++){an=(an*a)%m;}
map<ll,ll> mp;
ll tmp=an;
for (ll i=1; i<= n;i++){
    if (!mp[tmp]){mp[tmp]=i;}
        tmp=(1ll*tmp*an)%m;
}
tmp=b;
for (ll i=0;i<=n;i++){
    if (mp[tmp]){
            ll res=mp[tmp]*n-i;
            return res;
    }
    tmp=(1ll*tmp*a)%m;
  }
}
int main(){
scll(t);
while(t--){
scll(a);scll(b);scll(m);
if(b==1){printf("0\n");continue;}
printf("%lld\n",solve());
}
}
