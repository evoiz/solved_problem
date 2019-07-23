#include <bits/stdc++.h>
using namespace std;
long long n,ans;
long long dsegma(long long x){
   long long delta=sqrt(1+(8*x));
   long long ans=(delta-1)/2;
   return ans;
}
long long segma(long long x){return (x+1)*x/2;}
int main() {
cin>>n;
n=abs(n);
ans=dsegma(n);
ans+=(segma(ans)<n);
while((segma(ans)-n)%2){ans++;}
cout<<ans<<endl;
}
/**
(x^2)+x-2n=0;
delta=1+8n;

**/
