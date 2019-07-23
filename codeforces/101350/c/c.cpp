#include <bits/stdc++.h>
using namespace std;
const int N=1e5+5;
long long n,ans,q,m[N],mn=2e9;
int main(){
scanf("%I64d",&q);
 while(q--){
    scanf("%I64d",&n);
    ans=0;
    scanf("%I64d",&m[0]);
    mn=m[0];
    for(int i=1;i<n;i++){scanf("%I64d",&m[i]);mn=__gcd(mn,m[i]);}
    for(int i=0;i<n;i++){ans+=m[i]/mn+(m[i]%mn!=0);}
    printf("%I64d %I64d\n",ans*mn,mn);
 }
return 0;
}

