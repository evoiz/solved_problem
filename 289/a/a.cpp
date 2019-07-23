#include<bits/stdc++.h>
using namespace std;
long long n,k,ans,x,y;
int main(){
scanf("%I64d %I64d",&n,&k);
while(n--){
scanf("%I64d %I64d",&x,&y);
ans+=(y-(x-1));
}
ans=(k-ans%k)%k;
 cout<<ans<<endl;
}
/**
j>>i+2....n
i>>n-2;
1 2 3 0 3
1 3 6 6 9
i=3 j=5;
(1)=sum[i];
(2)=sum[j-1]-sum[i];
(3)=sum[n]-sum[j-1];
**/
