#include <bits/stdc++.h>
#define f first
#define s second
using namespace std;
const long long N=1e5+9;
long long n,a[N],ans;
map<long long ,long long> mp;
int main(){
cin>>n;
for(int i=0;i<n;i++){cin>>a[i];mp[a[i]]++;}
sort(a,a+n);
if(a[0]==a[1] && a[1]==a[2]){ans=mp[a[0]];ans=ans*(ans-1)*(ans-2)/6;}
else if(a[0]!=a[1] && a[1]==a[2]){ans=mp[a[1]];ans=ans*(ans-1)/2;}
else {ans=mp[a[2]];}
cout<<ans<<endl;
}