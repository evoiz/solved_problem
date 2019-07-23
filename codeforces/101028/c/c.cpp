#include <bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
int t,n;
long long ans;
string a,b;
int main(){
scanf("%d",&t);
while(t--){
cin>>n>>a>>b;
ans=1;
bool ok=1;
reverse(a.begin(),a.end());
reverse(b.begin(),b.end());
for(int i=0;i<n;i++){
  if(a[i]=='1' && b[i]=='1'){ans=((ans%mod)*2)%mod;}
  if(a[i]=='1'&&b[i]=='0'){ok=0;}
}
(ok?cout<<ans%mod<<endl:cout<<"IMPOSSIBLE"<<endl);
}
    return 0;
}
