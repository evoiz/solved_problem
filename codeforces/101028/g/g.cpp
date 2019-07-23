#include <bits/stdc++.h>
using namespace std;
long long t,a,b,c,ans,sequns;


int main(){
scanf("%d",&t);

while(t--){
cin>>b>>a>>c;
sequns=(a+a-2);
ans=(b%sequns)-1;
if(ans<0){ans=sequns-1;}
///cout<<ans<<" ";
(ans+1>a?ans=a-abs((ans+1)-a):ans=1+ans);
///cout<<ans<<endl;
(ans==c?cout<<"Yes"<<endl:cout<<"No"<<endl);
}
    return 0;
}
///6%8 9%8
