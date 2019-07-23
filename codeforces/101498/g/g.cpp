#include <bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define ld long double
using namespace std;
const int N=2e3+6;
long long lcm,n,t,m[N],sum[N],ans,mx=2000*1e9,tmp;
long long LCM(long long a,long long b){
return a/__gcd(a,b)*b;
}
int main(){
   scanf("%I64d",&t);
   while(t--){
    scanf("%I64d",&n);
    ans=0,tmp=0;
    for(int i=1;i<=n;i++){scanf("%I64d",&m[i]);tmp+=m[i];sum[i]=tmp;}
    for(int i=1;i<=n;i++){
        lcm=m[i];
        for(int j=i;j<=n;j++){
            lcm=LCM(lcm,m[j]);
            tmp=sum[j]-sum[i-1];
            if(lcm>mx){break;}
            ans+=(tmp%lcm==0);
        }
    }
    printf("%I64d\n",ans);
   }
    return 0;
}
