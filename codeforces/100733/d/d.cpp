#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define sz size

using namespace std;
const int N=1e6+10;
int n ,mem[N],a[N];
ll dp(int i ){
    if(i >= n ){return 0 ;}
    if(mem[i]!=-1){return mem[i];}
    ll ans= max(a[i]+dp(i+3),dp(i+1));
    return mem[i]=ans;
}
int main(){
    memset(mem,-1,sizeof mem);
    scanf("%lld",&n);
    for(int i=0;i<n;i++){scanf("%lld",a+i);}
    ll ans=dp(0);
   printf("%lld",ans);
    return 0;
}
