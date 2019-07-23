/**   binary search **/
#include<bits/stdc++.h>
using namespace std;
long long n,k;
long long segma(long long in){
return in*(in+1)/2;
}
long long dsegma(long long a,long b){
return segma(b)-segma(a-1);
}
long long binary(long long l,long long r){
if(l>r){ return k - l + 2;}
long long mid=(l+r)/2;
long long ans=dsegma(mid,k);
if(ans==n){return k-mid+1;}
else if(ans>n){return binary(mid+1,r);}
else if(ans<n){return binary(l,mid-1);}
}
int main()
{
    cin>>n>>k;
   if(n==0 || n==1){cout<<0<<endl;return 0;}
    n--;k--;
   if(segma(k)<n){cout<<-1<<endl;return 0;}
   cout<<binary(1,k)<<endl;
        return 0;
}
