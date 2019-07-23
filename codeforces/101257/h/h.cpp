#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size

using namespace std;
const int N = 1e5;
ll a[N],n,sum,ans,tmp;
int main(){
    scanf("%lld",&n);
    for(int i=0;i<n;i++){scanf("%lld",a+i);sum+=a[i];}
 sort(a,a+n);
 for(int i=0;i<n;i++){
     sum-=1ll*a[i];
     ans+=1ll*sum;
 }
 printf("%lld\n",ans);
    return 0;
}
