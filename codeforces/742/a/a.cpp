#include <bits/stdc++.h>

using namespace std;
long long  mod_pow(long long a,long long b,long long mod){
    long long ans=(long long)1;
    while(b){
        if(b&1)ans=ans*a%mod;
        a=a*a%mod;
        b>>=1;
    }
    return ans;
}
long long n,ans;
int main(){
scanf("%I64d",&n);
 ans=mod_pow(1378,n,10);
printf("%I64d",ans);
   return 0;
}