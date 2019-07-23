#include <bits/stdc++.h>
#define f first
#define s second
using namespace std;
long long ans,n,k;
bool ok(long long x){
   long long  sum=0,tmp=x;
   while(tmp){
    sum+=tmp%10;
    tmp/=10;
   }
   if(abs(sum-x)>=k){return 1;}
   return 0;
}
void bsr(long long l,long long r){
    if(l>r){return ;}
long long mid=(l+r)/2;
if(ok(mid)){ans=mid; bsr(l,mid-1);}
else{bsr(mid+1,r);}
}
int main(){
cin>>n>>k;
bsr(1,n);
(ans?ans=n-ans+1:ans=0);
cout<<ans<<endl;
}
