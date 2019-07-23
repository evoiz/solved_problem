#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size

using namespace std;
const int N = (1e3) + 5;
ll n,m,a[20],b[20];
map<ll,ll> mp;
int main(){
    scanf("%lld%lld",&n,&m);
    for(int i=0;i<n;i++){scanf("%lld",a+i);}
    for(int i=0;i<m;i++){scanf("%lld",b+i);}
    int mask=(1<<n)-1;
    for(int i=1;i<=mask;i++){
      ll ans=0;
       for(int j=0;j<n;j++){
        if(i&(1<<j)){ans+=a[j];}
       }
       mp[ans]++;
    }
    mask=(1<<m)-1;
    ll ans=0;
    for(int i=1;i<=mask;i++){
      ll tmp=0;
       for(int j=0;j<m;j++){
        if(i&(1<<j)){tmp+=b[j];}
       }
       ans+=mp[tmp];
    }
    printf("%lld",ans);
    return 0;
}
