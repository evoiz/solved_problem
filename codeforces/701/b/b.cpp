#include <bits/stdc++.h>
using namespace std;
set<long long > x,y;
long long t,n,nx,ny,tmpx,tmpy,ans;
int main(){
cin>>n>>t;
nx=ny=n;
while(t--){
    cin>>tmpx>>tmpy;
    if(!(x.find(tmpx)!=x.end())){nx--;x.insert(tmpx);}
    if(!(y.find(tmpy)!=y.end())){ny--;y.insert(tmpy);}
    ans=ny*nx;
   /// cout<<nx<<"\t"<<ny<<endl;
    cout<<ans<<endl;
}
return 0;
}
