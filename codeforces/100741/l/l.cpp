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
map<ll,ll> mpa,mpb;
int main(){
    scanf("%lld%lld",&n,&m);
    int mask=(1<<m)-1;
    for(int i=0;i<n;i++){scanf("%lld",a+i);}
    for(int i=0;i<m;i++){scanf("%lld",b+i);}
    for(int i=1;i<=mask;i++){
      ll ans=0;
       for(int j=0;j<m;j++){
        if(i&(1<<j)){ans+=b[j];}
       }
       mpb[ans]++;
    }
    mask=(1<<n)-1;
    for(int i=1;i<=mask;i++){
      ll ans=0;
       for(int j=0;j<n;j++){
        if(i&(1<<j)){ans+=a[j];}
       }
       mpa[ans]++;
    }
    ll ans=0;
    for(auto x:mpa){
       ans+=mpa[x.F]*mpb[x.F];
       //cout<<x.F<<" "<<mpa[x.F]<<" "<<mpb[x.F]<<endl;
    }
    printf("%lld",ans);
    return 0;
}
