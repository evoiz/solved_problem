#include <bits/stdc++.h>
using namespace std;
int x1,x2,y1,y2,t,n,ans;
int main(){
cin>>t>>n;
while(t--){
cin>>x1>>y1>>x2>>y2;
if(((x1%2)+(y1%2))%2!=((x2%2)+(y2%2))%2){cout<<"can't reach!"<<endl;continue;}
int dx=abs(x1-x2);
int dy=abs(y1-y2);
int d=min(dx,dy);
if(d==dx){ans=dx+abs(dy-dx);}
if(d==dy){ans=dy+abs(dx-dy);}
cout<<ans<<endl;
}
return 0;
}

