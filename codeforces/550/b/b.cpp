#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size

using namespace std;
const int N=1e6+5,oo=1e9+10;
ll n,l,r,x,a[N],ans,tmp;
int main(){
scanf("%lld%lld%lld%lld",&n,&l,&r,&x);
for(int i=0;i<n;i++){scanf("%lld",a+i);}
ll mask=(1ll<<n);
for(int i=0;i<mask;i++){
       ll mn=oo;ll mx=-oo,sum=0;
       for(int j=0;j<n;j++){if(i&(1<<j)){sum+=a[j];mx=max(a[j],mx);mn=min(mn,a[j]);}}
       tmp=(mx-mn);
       //cerr<<(sum>=l)<<" "<<(sum<=r)<<" "<<(tmp==x)<<endl;
       if(sum>=l && sum<=r && tmp>=x){ans++;}
}
printf("%lld\n",ans);
    return 0;
}
/**
4 2 10
1 2
1 2
5 2
3 1
3 2
**/
