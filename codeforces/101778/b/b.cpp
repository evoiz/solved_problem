#include <bits/stdc++.h>
#define F first
#define S second
#define ld long double
#define pb push_back
#define sz size
#define ll long long
using namespace std;
ll n,a,t;
bool ok(ll m){
    ll sum=a*n-m*(m+1)/2;
    ll rem=n-m;
    if(rem==0) return sum==0;
    double ave=(double)sum/rem;
    return  (!(ave<1 || ave>m));
}
int main(){
    scanf("%lld",&t);
    while(t--){
        scanf("%lld%lld",&n,&a);
        if(n<=2*a-1) printf("%lld\n",n);
        else{
            ll l=2*a-1,r=n;
            while(l<r){
                ll mid=(l+r+1)/2;
                if(ok(mid)) l=mid;
                else r=mid-1;
            }
            printf("%lld\n",l);
        }
    }
}
